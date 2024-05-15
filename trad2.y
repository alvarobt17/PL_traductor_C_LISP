/* Fernando Galán Núñez Álvaro Bernal Torregrosa Grupo 42
   100451280@alumnos.uc3m.es 100451179@alumnos.uc3m.es 
*/
%{                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para code
#include <stdlib.h>           // declaraciones para exit ()

#define FF fflush(stdout);    // para forzar la impresion inmediata
#define ARIT 1            // para identificar el tipo de expresion    
#define BOOL 2                // para identificar el tipo de expresion

int yylex () ;
void yyerror () ;
char *my_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;

char temp [2048] ;
char nombre_funcion [1024];
char var_let [100][2048];
int cont = 0;
char var_expresion [2048];
char var_expresion2 [2048];


// Definitions for explicit attributes

typedef struct s_attr {
        int value ;
        char *code ;
        int type ;
} t_attr ;

#define YYSTYPE t_attr

%}

// Definitions for explicit attributes

%token NUMBER        
%token IDENTIF       // Identificador=variable
%token INTEGER       // identifica el tipo entero
%token STRING
%token MAIN          // identifica el comienzo del proc. main
%token WHILE         // identifica la condicion while
%token IF            // identifica la condicion if
%token FOR           // identifica la condicion for
%token RETURN        // identifica la condicion return
%token ELSE          // identifica la condicion else
%token PUTS          // identifica la condicion puts
%token PRINTF        // identifica la condicion printf
%token MAYOR_IGUAL   
%token MENOR_IGUAL
%token IGUAL_IGUAL
%token DISTINTO
%token AND
%token OR



// Definitions for implicit attributes.
// USE THESE ONLY AT YOUR OWN RISK
/*
%union {                      // El tipo de la pila tiene caracter dual
    int value ;             // - valor numerico de un NUMERO
    char *code ;          // - para pasar los nombres de IDENTIFES
}
%token <value> NUMBER       // Todos los token tienen un tipo para la pila
%token <code> IDENTIF       // Identificador=variable
%token <code> INTEGER       // identifica la definicion de un entero
%token <code> STRING
%token <code> MAIN          // identifica el comienzo del proc. main
%token <code> WHILE         // identifica el bucle main
%type <...> Axiom ...
*/

%right '='                    // es la ultima operacion que se debe realizar
%left OR
%left AND
%left IGUAL_IGUAL DISTINTO
%left '>' '<' MAYOR_IGUAL MENOR_IGUAL          
%left '+' '-' '%'               // menor orden de precedencia
%left '*' '/'                 // orden de precedencia intermedio
%left UNARY_SIGN              // mayor orden de precedencia

%%                            // Seccion 3 Gramatica - Semantico

//////////////////////////////////////////AXIOMA/////////////////////////////////////////////

//Separamos el código en bloques para poder hacer el código más legible
axioma:       bloque_variables                  { ; }
              bloque_funciones                  { ; }
            ;

//////////////////////////////////////////BLOQUE FUNCIONES//////////////////////////////////////////

// Bloque de funciones
bloque_funciones:                     { ; }
                |  funcion_recur { printf ("%s", $1.code) ; }
                   main_nt                  { printf("%s",temp) ; }
                ;

//Para poder tener varias funciones en el código
funcion_recur:                  { sprintf(temp, "");
                                        $$.code = gen_code(temp ) ;}
            | funcion  funcion_recur { sprintf (temp, "%s\n%s", $1.code, $2.code) ;
                                        $$.code = gen_code (temp) ; }
            ;

//////////////////////////////////////////BLOQUE VARIABLES GLOBALES//////////////////////////////////////

// Bloque de variables
bloque_variables:                      { ; }
                | variables_globales r_variables_gl ';'           { printf ("%s %s\n", $1.code, $2.code) ; }
                    bloque_variables                 { ; }
                ;

//Para poder hacer recursividad en las variables globales en una sola línea
r_variables_gl:                         { sprintf(temp, "");
                                        $$.code = gen_code(temp ) ;}
            |',' decla_variables_recur r_variables_gl    { sprintf (temp, "%s %s", $2.code, $3.code) ;
                                                            $$.code = gen_code (temp) ; }
            ;

//Bloque para las variables globales
variables_globales:  INTEGER IDENTIF '=' expresion  {if ($4.type == ARIT){
                                                    sprintf(var_expresion, "%s", $4.code);}
                                                    else if($4.type == BOOL){
                                                    { sprintf (var_expresion, "(if %s 1 0)", $4.code); }}
                                                    sprintf (temp, "(setq %s %s)", $2.code, var_expresion) ;
                                                    $$.code = gen_code (temp) ; }
            | INTEGER IDENTIF              { sprintf (temp, "(setq %s 0)", $2.code) ;
                                            $$.code = gen_code (temp) ; }
            | INTEGER IDENTIF '['operando']' { sprintf (temp, "(setq %s (make-array %s))", $2.code, $4.code) ;
                                             $$.code = gen_code (temp) ; }
            | INTEGER IDENTIF '['operando']' '=' expresion { if ($7.type == ARIT){
                                                            sprintf(var_expresion, "%s", $7.code);}
                                                            else if($7.type == BOOL){
                                                            { sprintf (var_expresion, "(if %s 1 0)", $7.code); }}
                                                            sprintf (temp, "(setf (aref %s %s) %s)", $2.code, $4.code,  var_expresion) ;
                                                            $$.code = gen_code (temp) ; }
            ;

//Bloque para las variables globales, pero para poder declarar en una sola línea un unico int, ejemplo: int a,b,c;
decla_variables_recur:              {sprintf(temp, "");
                                        $$.code = gen_code(temp ) ;}
            |  IDENTIF '=' expresion       { if ($3.type == ARIT){
                                                sprintf(var_expresion, "%s", $3.code);}
                                                else if($3.type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", $3.code); }}
                                                 sprintf (temp, "(setq %s %s)", $1.code,  var_expresion) ; 
                                                $$.code = gen_code (temp) ; }
            | IDENTIF                   { sprintf (temp, "(setq %s 0)", $1.code) ;
                                           $$.code = gen_code (temp) ; }
            | IDENTIF '['operando']' '=' expresion { if ($6.type == ARIT){
                                                        sprintf(var_expresion, "%s", $6.code);}
                                                        else if($6.type == BOOL){
                                                        { sprintf (var_expresion, "(if %s 1 0)", $6.code); }}
                                                        sprintf (temp, "(setf (aref %s %s) %s)", $1.code, $3.code,  var_expresion) ;
                                                        $$.code = gen_code (temp) ; }
            | IDENTIF '['operando']' { sprintf (temp, "(setq %s (make-array %s))", $1.code, $3.code) ;
                                           $$.code = gen_code (temp) ; }
            ;

            ;


//////////////////////////////////////////FUNCIONES//////////////////////////////////////////

// Bloque para las funciones
funcion:    IDENTIF {sprintf(nombre_funcion, "%s", $1.code);}'(' parametros parametros_recur ')' '{' sentencias_loc  n_sentencias_loc '}' { sprintf (temp, "(defun %s (%s%s) \n%s \n%s%s)", $1.code, $4.code, $5.code, $8.code, $9.code, var_let[cont]) ;
                                                                                                                                            memset(var_let[cont], 0, sizeof(var_let[cont]));
                                                                                                                                            $$.code = gen_code (temp) ; }
            ;

//Bloque para la función main
main_nt:        MAIN {sprintf(nombre_funcion, "%s", $1.code);} '(' ')' '{' sentencias_loc  n_sentencias_loc '}' { sprintf (temp, "(defun main () \n%s \n%s%s) \n", $6.code, $7.code, var_let[cont]) ;
                                                                                                                     $$.code = gen_code (temp) ; }
            ;

//////////////////////////////////////////PARÁMETROS FUNCIÓN//////////////////////////////////////////

//Bloque para los parámetros de las funciones
parametros:                              { sprintf(temp, "");
                                        $$.code = gen_code(temp ) ;}
            |INTEGER IDENTIF              { sprintf (temp, "%s", $2.code) ;
                                           $$.code = gen_code (temp) ; }
            ;
//Bloque para poder hacer recursividad en los parámetros 
parametros_recur :                  {sprintf(temp, "");
                                        $$.code = gen_code(temp ) ;}
            |',' parametros parametros_recur { sprintf (temp, " %s%s", $2.code, $3.code) ;
                                                    $$.code = gen_code (temp) ; }
            ;

//////////////////////////////////////////SENTENCIAS LOCALES//////////////////////////////////////////

//Bloque para poder hacer recursividad en las sentencias locales
n_sentencias_loc:                  {sprintf(temp, "");
                                        $$.code = gen_code(temp ) ;}
            | sentencias_loc  n_sentencias_loc { sprintf (temp, "%s \n%s", $1.code, $2.code) ;
                                                    $$.code = gen_code (temp) ; }
            ;

//Bloque para las sentencias locales   
sentencias_loc:      // Decla. de variables locales
                        IDENTIF '=' expresion ';'     {     if ($3.type == ARIT){
                                                            sprintf(var_expresion, "%s", $3.code);}
                                                            else if($3.type == BOOL){
                                                            { sprintf (var_expresion, "(if %s 1 0)", $3.code); }}
                                                            sprintf (temp, "(setq %s %s) ", $1.code, var_expresion) ;
                                                            $$.code = gen_code (temp) ; }
            | INTEGER IDENTIF '=' expresion  r_variables_loc ';' { if ($4.type == ARIT){
                                                                    sprintf(var_expresion, "%s", $4.code);}
                                                                    else if($4.type == BOOL){
                                                                    { sprintf (var_expresion, "(if %s 1 0)", $4.code); }}
                                                                    sprintf (temp, "(let ((%s %s)%s)", $2.code, var_expresion, $5.code) ;
                                                                    sprintf(var_let[cont], "%s)\n",var_let[cont]);
                                                                    $$.code = gen_code (temp) ; }
            | INTEGER IDENTIF  r_variables_loc ';' { sprintf (temp, "(let ((%s 0)%s)", $2.code, $3.code) ;
                                                     sprintf(var_let[cont], "%s)\n",var_let[cont]);
                                                     $$.code = gen_code (temp) ; }

            // Bloque con paréntesis 
            | '{' {cont++;} sentencias_loc  n_sentencias_loc '}' { sprintf (temp, "%s \n%s%s", $3.code, $4.code, var_let[cont]) ;
                                                                    {cont--;}
                                                                    $$.code = gen_code (temp) ; }

            //Múltiples declaraciones de variables locales
            | IDENTIF ',' multiples_variables '=' expresion ',' expresion_recur ';'     { if ($5.type == ARIT){
                                                                                          sprintf(var_expresion, "%s", $5.code);}
                                                                                          else if($5.type == BOOL){
                                                                                          { sprintf (var_expresion, "(if %s 1 0)", $5.code); }}
                                                                                          sprintf (temp, "(setf (values %s %s) (values %s %s))", $1.code, $3.code, var_expresion, $7.code) ; 
                                                                                          $$.code = gen_code (temp) ; }
            | IDENTIF ',' multiples_variables '=' IDENTIF '(' argumentos_funcion')' ';' { sprintf (temp, "(setf (values %s %s) (%s %s))", $1.code, $3.code, $5.code, $7.code) ; 
                                                                    $$.code = gen_code (temp) ; }
                                                    
            // Printf y puts
            | PRINTF '(' cadena_printf  n_cadena_printf ')' ';'           { sprintf (temp, "(print %s)%s", $3.code, $4.code)  ;  
                                           $$.code = gen_code (temp) ; }
            | PUTS '(' STRING')'   ';'     { sprintf (temp, "(print \"%s\")", $3.code) ;
                                           $$.code = gen_code (temp) ; }

            // Vectores
             | IDENTIF '['operando']' '=' expresion ';' {    if ($6.type == ARIT){
                                                            sprintf(var_expresion, "%s", $6.code);}
                                                            else if($6.type == BOOL){
                                                            { sprintf (var_expresion, "(if %s 1 0)", $6.code); }}  
                                                            sprintf (temp, "(setf (aref %s %s) %s)", $1.code, $3.code, var_expresion) ;
                                                            $$.code = gen_code (temp) ; }

            | INTEGER IDENTIF '['operando']' r_variables_loc ';' { sprintf (temp, "(let (%s (make-array %s)%s)", $2.code, $4.code, $6.code) ;
                                                                        sprintf(var_let[cont], "%s)\n",var_let[cont]);
                                                                        $$.code = gen_code (temp) ; }
            | INTEGER IDENTIF '['operando']' '=' expresion r_variables_loc ';' { if ($7.type == ARIT){
                                                                                 sprintf(var_expresion, "%s", $7.code);}
                                                                                 else if($7.type == BOOL){
                                                                                 { sprintf (var_expresion, "(if %s 1 0)", $7.code); }}
                                                                                sprintf (temp, "(let ((%s (make-array %s))%s %s)", $2.code, $4.code, var_expresion, $8.code) ;
                                                                                sprintf(var_let[cont], "%s)\n",var_let[cont]);
                                                                                $$.code = gen_code (temp) ; }

            // Sentencias de control                    
            | WHILE '(' expresion ')' '{' sentencias_loc  n_sentencias_loc '}' { if ($3.type == ARIT){
                                                                                sprintf (var_expresion, "(/= 0 %s)", $3.code);
                                                                                }else if ($3.type == BOOL){
                                                                                sprintf (var_expresion,"%s", $3.code); }
                                                                                sprintf (temp, "(loop while %s do \n%s \n%s)", var_expresion, $6.code, $7.code) ;
                                                                                $$.code = gen_code (temp) ; }
            | IF '(' expresion ')' '{' sentencia_if condicion_else           {  if ($3.type == ARIT){
                                                                                sprintf (var_expresion, "(/= 0 %s)", $3.code);
                                                                                }else if ($3.type == BOOL){
                                                                                sprintf(var_expresion, "%s", $3.code); }
                                                                                sprintf (temp, "(if %s \n%s \n%s)", var_expresion, $6.code, $7.code) ;
                                                                                        $$.code = gen_code (temp) ; }
            | FOR '(' inicializar_for ';' expresion ';' IDENTIF '=' expresion ')' '{' sentencias_loc  n_sentencias_loc '}' { if ($5.type == ARIT){
                                                                                                                            sprintf (var_expresion, "(/= 0 %s)", $5.code);
                                                                                                                            }else if ($5.type == BOOL){
                                                                                                                            sprintf (var_expresion, "%s", $5.code); }
                                                                                                                            if ($9.type == ARIT){
                                                                                                                            sprintf (var_expresion2, "%s", $9.code);
                                                                                                                            }else if ($9.type == BOOL){
                                                                                                                            sprintf (var_expresion2, "(if %s 1 0)", $9.code); }
                                                                                                                            sprintf (temp, "%s\n(loop while %s do \n%s \n%s(setq %s %s))", $3.code, var_expresion, $12.code, $13.code, $7.code, var_expresion2) ;
                                                                                                                            $$.code = gen_code (temp) ; }
            // Declaraciones de funciones                                                                                                        
            | IDENTIF '(' argumentos_funcion ')' ';' { sprintf (temp, "(%s %s)", $1.code, $3.code) ;
                                           $$.code = gen_code (temp) ; }
            
            // Return
            | RETURN expresion ';' { if ($2.type == ARIT){
                                    sprintf(var_expresion, "%s", $2.code);}
                                    else if($2.type == BOOL){
                                    { sprintf (var_expresion, "(if %s 1 0)", $2.code); }}
                                    sprintf (temp, "(return-from %s %s)", nombre_funcion, var_expresion) ;
                                    $$.code = gen_code (temp) ; }
            | RETURN expresion ',' return_recursivo ';' { if ($2.type == ARIT){
                                                        sprintf(var_expresion,"%s", $2.code);}
                                                        else if($2.type == BOOL){
                                                        { sprintf (var_expresion, "(if %s 1 0)", $2.code); }}
                                                        sprintf (temp, "(return-from %s values(%s %s))", nombre_funcion, var_expresion, $4.code) ;
                                                        $$.code = gen_code (temp) ; }

// Bloque para hacer recuriso las expresiones del return
return_recursivo:  expresion     { if ($1.type == ARIT){
                                   sprintf(var_expresion,"%s", $1.code);}
                                    else if($1.type == BOOL){
                                        { sprintf (var_expresion, "(if %s 1 0)", $1.code); }}
                                    sprintf (temp, "%s", var_expresion) ;
                                    $$.code = gen_code (temp) ; }
                | expresion ',' return_recursivo     { if ($1.type == ARIT){
                                               sprintf(var_expresion,"%s", $1.code);}
                                                else if($1.type == BOOL){
                                                    { sprintf (var_expresion, "(if %s 1 0)", $1.code); }}
                                                    sprintf (temp, "%s %s", var_expresion, $3.code) ;
                                                    $$.code = gen_code (temp) ; }
            ;

//Bloque para poder hacer recursividad en las variables locales solo en una línea, ejemplo: int a,b,c;
r_variables_loc:                {sprintf(temp, "");
                                        $$.code = gen_code(temp ) ;}   
            | ',' decla_variables_recur_loc r_variables_loc { sprintf (temp, "%s %s", $2.code, $3.code) ;
                                                    $$.code = gen_code (temp) ; }
            ;

//Bloque para las sentencias locales permitidas en una sola línea
decla_variables_recur_loc:              {sprintf(temp, "");
                                        $$.code = gen_code(temp ) ;}
            |  IDENTIF '=' expresion       {    if ($3.type == ARIT){
                                                sprintf(var_expresion, "%s", $3.code);}
                                                else if($3.type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", $3.code); }}
                                                sprintf (temp, "\n(%s %s)", $1.code, var_expresion) ; 
                                                $$.code = gen_code (temp) ; }
            | IDENTIF                   { sprintf (temp, "\n(%s 0)", $1.code) ;
                                           $$.code = gen_code (temp) ; }
            | IDENTIF '['operando']' '=' operando { sprintf (temp, "\n((aref %s %s) %s)", $1.code, $3.code, $6.code) ;
                                                    $$.code = gen_code (temp) ; }
            | IDENTIF '['operando']' { sprintf (temp, "\n(setq %s (make-array %s))", $1.code, $3.code) ;
                                           $$.code = gen_code (temp) ; }
            
            ;



//////////////////////////////////////////MULTIPLES DECLARACIONES//////////////////////////////////////////

//Bloque para poder asignar varios valores a varias variables locales en una sola línea, ejemplo: a, b = b, a;

//Parte izquierda de la asignación
multiples_variables:     IDENTIF                    { sprintf (temp, "%s", $1.code) ;
                                                        $$.code = gen_code (temp) ; }
            | IDENTIF ',' multiples_variables        { sprintf (temp, "%s %s", $1.code, $3.code) ;
                                                         $$.code = gen_code (temp) ; }
            ;

//Parte derecha de la asignación
expresion_recur :         expresion {   if ($1.type == ARIT){
                                       sprintf(var_expresion,"%s", $1.code);}
                                        else if($1.type == BOOL){
                                        { sprintf (var_expresion, "(if %s 1 0)", $1.code); }}
                                        sprintf (temp, "%s", var_expresion) ;
                                        $$.code = gen_code (temp) ; }
            | expresion ',' expresion_recur { if ($1.type == ARIT){
                                               sprintf(var_expresion,"%s", $1.code);}
                                                else if($1.type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", $1.code); }}
                                                sprintf (temp, "%s %s", var_expresion, $3.code) ;
                                                $$.code = gen_code (temp) ; }
            ;

//////////////////////////////////////////ARGUMENTOS FUNCIÓN//////////////////////////////////////////

//Bloque para los argumentos de las funciones
argumentos_funcion:                  { sprintf(temp, "");
                                        $$.code = gen_code(temp ) ;}
            | expresion  argumentos_funcion_recur {if ($1.type == ARIT){
                                                   sprintf(var_expresion,"%s", $1.code);}
                                                    else if ($1.type == BOOL){
                                                    {sprintf (var_expresion, "(if %s 1 0)", $1.code);}} 
                                                    sprintf (temp, "%s %s", var_expresion, $2.code) ;
                                                    $$.code = gen_code (temp) ; }
            ;

// Bloque para hacer recursividad en los argumentos de las funciones
argumentos_funcion_recur:                  {  sprintf(temp, "");
                                        $$.code = gen_code(temp ) ;}
            |  ',' expresion argumentos_funcion_recur { if($2.type == ARIT){
                                                    sprintf(var_expresion,"%s", $2.code);}
                                                    else if($2.type == BOOL){
                                                    { sprintf (var_expresion, "(if %s 1 0)", $2.code); }}
                                                    sprintf (temp, "%s %s", var_expresion, $3.code) ;
                                                    $$.code = gen_code (temp) ; }
            ;

//////////////////////////////////////////ESTRUCTURAS DE CONTROL//////////////////////////////////////////

//////////////////////////////////////////SENTENCIA IF//////////////////////////////////////////////////
    
sentencia_if: sentencias_loc '}'          { sprintf (temp, "%s", $1.code) ;
                                           $$.code = gen_code (temp) ; }
            | sentencias_loc sentencia_if_recur '}' { sprintf (temp, "(progn %s\n%s)", $1.code, $2.code) ;
                                                                                        $$.code = gen_code (temp) ; }
            ;

sentencia_if_recur:  sentencias_loc   sentencia_if_recur_2 { sprintf (temp, "%s\n%s", $1.code, $2.code) ;
                                                                                        $$.code = gen_code (temp) ; }
            ;

sentencia_if_recur_2:                   {sprintf(temp, "");
                                        $$.code = gen_code(temp ) ;}
            |     sentencia_if_recur   {  sprintf (temp, "%s", $1.code) ;
                                            $$.code = gen_code (temp) ; }
            ;



//////////////////////////////////////////SENTENCIA ELSE//////////////////////////////////////////

condicion_else:                         {sprintf(temp, "");
                                        $$.code = gen_code(temp ) ;}
            | ELSE '{' sentencia_if { sprintf (temp, "%s", $3.code) ;
                                           $$.code = gen_code (temp) ; }
            ;

//////////////////////////////////////////SENTENCIA FOR//////////////////////////////////////////

//Bloque para las sentencias que pueden inicializar el for
inicializar_for:                         {sprintf(temp, "");
                                        $$.code = gen_code(temp ) ;}
            | INTEGER IDENTIF '=' NUMBER  { sprintf (temp, "(setq %s %d)", $2.code, $4.value) ;
                                           $$.code = gen_code (temp) ; }
            | INTEGER IDENTIF              { sprintf (temp, "(setq %s 0)", $2.code) ;
                                           $$.code = gen_code (temp) ; }
            |  IDENTIF '=' expresion             { if($3.type == ARIT){
                                                    sprintf(var_expresion, "%s", $3.code);}
                                                    else if($3.type == BOOL){
                                                    { sprintf (var_expresion, "(if %s 1 0)", $3.code); }}
                                                    sprintf (temp, "(setq %s %s)", $1.code, var_expresion) ;
                                                    $$.code = gen_code (temp) ; }
            |  IDENTIF                      { sprintf (temp, "(setq %s 0)", $1.code) ;
                                                $$.code = gen_code (temp) ; }
            ;


//////////////////////////////////////////PRINTF//////////////////////////////////////////

//Bloque para las expresiones dentro de la cadena de printf 
cadena_printf:  STRING ',' expresion { if ($3.type == ARIT){
                                        sprintf(var_expresion, "%s", $3.code);}
                                        else if ($3.type == BOOL){
                                        {sprintf (var_expresion, "(if %s 1 0)", $3.code);}}
                                         sprintf (temp, "%s", var_expresion) ;
                                        $$.code = gen_code (temp) ; }
            | expresion               {if ($1.type == ARIT){
                                           sprintf(var_expresion,"%s", $1.code);}
                                            else if ($1.type == BOOL){
                                            {sprintf (var_expresion, "(if %s 1 0)", $1.code);}}
                                            sprintf (temp, "%s", var_expresion) ;
                                            $$.code = gen_code (temp) ; }

//Bloque para hacer recursividad en las expresiones dentro de la cadena de printf
n_cadena_printf:                   {sprintf(temp, "");
                                        $$.code = gen_code(temp ) ;}
            | ',' cadena_printf n_cadena_printf { sprintf (temp, "(print %s)%s", $2.code, $3.code) ;
                                           $$.code = gen_code (temp) ; }
            ;

//////////////////////////////////////////EXPRESIONES//////////////////////////////////////////

//Bloque para las expresiones    
expresion:      termino                  { $$ = $1 ; }
            |   expresion '+' expresion  {  if ($1.type == ARIT){
                                             sprintf(var_expresion,"%s", $1.code);}
                                            else if($1.type == BOOL){
                                            { sprintf (var_expresion, "(if %s 1 0)", $1.code); }}
                                            if ($3.type == ARIT){
                                                sprintf(var_expresion2, "%s", $3.code);
                                            }else if($3.type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  $3.code) ;
                                            }
                                            sprintf (temp, "(+ %s %s)", var_expresion, var_expresion2) ;
                                            $$.type = ARIT;
                                           $$.code = gen_code (temp) ; }
            |   expresion '-' expresion  {  if ($1.type == ARIT){
                                               sprintf(var_expresion,"%s", $1.code);
                                            }
                                            else if($1.type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", $1.code); }
                                            }
                                            if ($3.type == ARIT){
                                                sprintf(var_expresion2, "%s", $3.code);
                                            }else if($3.type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  $3.code) ;
                                            }
                                            sprintf (temp, "(- %s %s)", var_expresion, var_expresion2) ;
                                            $$.type = ARIT;
                                           $$.code = gen_code (temp) ; }
            |   expresion '*' expresion  {  if ($1.type == ARIT){
                                                sprintf (var_expresion,"%s", $1.code);
                                            }
                                            else if($1.type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", $1.code); }
                                            }
                                            if ($3.type == ARIT){
                                                sprintf(var_expresion2,"%s", $3.code);
                                            }else if($3.type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  $3.code) ;
                                            }
                                            sprintf (temp, "(* %s %s)", var_expresion, var_expresion2) ;
                                            $$.type = ARIT;
                                           $$.code = gen_code (temp) ; }
            |   expresion '/' expresion  { if ($1.type == ARIT){
                                             sprintf(var_expresion,"%s", $1.code);
                                            }
                                            else if($1.type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", $1.code); }
                                            }
                                            if ($3.type == ARIT){
                                                sprintf(var_expresion2, "%s", $3.code);
                                            }else if($3.type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  $3.code) ;
                                            }
                                            sprintf (temp, "(/ %s %s)", var_expresion, var_expresion2) ;
                                            $$.type = ARIT;
                                           $$.code = gen_code (temp) ; }
            |   expresion '%' expresion  {  if ($1.type == ARIT){
                                             sprintf(var_expresion,"%s", $1.code);
                                            }
                                            else if($1.type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", $1.code); }
                                            }
                                            if ($3.type == ARIT){
                                                sprintf(var_expresion2, "%s", $3.code);
                                            }else if($3.type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  $3.code) ;
                                            }
                                            sprintf (temp, "(mod %s %s)", var_expresion, var_expresion2) ;
                                            $$.type = ARIT;
                                             $$.code = gen_code (temp) ; }
            |   expresion AND expresion  {  if ($1.type == ARIT){
                                              { sprintf (var_expresion, "(/= 0 %s)", $1.code);}
                                            }
                                            else if($1.type == BOOL){
                                               sprintf(var_expresion,"%s", $1.code);
                                            }
                                            if ($3.type == ARIT){
                                                sprintf (var_expresion2, "(/= 0 %s)",  $3.code) ;
                                            }else if($3.type == BOOL){
                                                sprintf(var_expresion2, "%s", $3.code);
                                            }
                                            sprintf (temp, "(and %s %s)", var_expresion, var_expresion2) ;
                                            $$.type = BOOL;
                                           $$.code = gen_code (temp) ; }
            |   expresion OR expresion   {   if ($1.type == ARIT){
                                              { sprintf (var_expresion, "(/= 0 %s)", $1.code);}
                                            }
                                            else if($1.type == BOOL){
                                               sprintf(var_expresion,"%s", $1.code);
                                            }
                                            if ($3.type == ARIT){
                                                sprintf (var_expresion2, "(/= 0 %s)",  $3.code) ;
                                            }else if($3.type == BOOL){
                                                sprintf(var_expresion2, "%s", $3.code);
                                            }
                                             sprintf (temp, "(or %s %s)", var_expresion, var_expresion2) ;
                                            $$.type = BOOL;
                                             $$.code = gen_code (temp) ; }
            |   expresion DISTINTO expresion  {  if ($1.type == ARIT){
                                               sprintf(var_expresion,"%s", $1.code);
                                            }
                                            else if($1.type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", $1.code); }
                                            }
                                            if ($3.type == ARIT){
                                                sprintf(var_expresion2, "%s", $3.code);
                                            }else if($3.type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  $3.code) ;
                                            }
                                            sprintf (temp, "(/= %s %s)", var_expresion, var_expresion2) ;
                                            $$.type = BOOL;
                                             $$.code = gen_code (temp) ; }
            |   expresion IGUAL_IGUAL expresion  {    if ($1.type == ARIT){
                                               sprintf(var_expresion,"%s", $1.code);
                                            }
                                            else if($1.type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", $1.code); }
                                            }
                                            if ($3.type == ARIT){
                                                sprintf(var_expresion2, "%s", $3.code);
                                            }else if($3.type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  $3.code) ;
                                            }
                                            sprintf (temp, "(= %s %s)", var_expresion, var_expresion2) ;
                                            $$.type = BOOL;
                                             $$.code = gen_code (temp) ; }
            |   expresion MENOR_IGUAL expresion {   if ($1.type == ARIT){
                                             sprintf(var_expresion,"%s", $1.code);
                                            }
                                            else if($1.type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", $1.code); }
                                            }
                                            if ($3.type == ARIT){
                                                sprintf(var_expresion2, "%s", $3.code);
                                            }else if($3.type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  $3.code) ;
                                            }
                                            sprintf (temp, "(<= %s %s)", var_expresion, var_expresion2) ;
                                            $$.type = BOOL;
                                             $$.code = gen_code (temp) ; }
            |   expresion MAYOR_IGUAL expresion {   if ($1.type == ARIT){
                                             sprintf(var_expresion,"%s", $1.code);
                                            }
                                            else if($1.type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", $1.code); }
                                            }
                                            if ($3.type == ARIT){
                                                sprintf(var_expresion2, "%s", $3.code);
                                            }else if($3.type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  $3.code) ;
                                            }
                                            sprintf (temp, "(>= %s %s)", var_expresion, var_expresion2) ;
                                            $$.type = BOOL;
                                            $$.code = gen_code (temp) ; }
            |   expresion '<' expresion {    if ($1.type == ARIT){
                                               sprintf(var_expresion,"%s", $1.code);
                                            }
                                            else if($1.type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", $1.code); }
                                            }
                                            if ($3.type == ARIT){
                                                sprintf(var_expresion2, "%s", $3.code);
                                            }else if($3.type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  $3.code) ;
                                            }
                                            sprintf (temp, "(< %s %s)", var_expresion, var_expresion2) ;
                                            $$.type = BOOL;
                                            $$.code = gen_code (temp) ; }
            |   expresion '>' expresion {   if ($1.type == ARIT){
                                             sprintf(var_expresion,"%s", $1.code);
                                            }
                                            else if($1.type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", $1.code); }
                                            }
                                            if ($3.type == ARIT){
                                                sprintf(var_expresion2, "%s", $3.code);
                                            }else if($3.type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  $3.code) ;
                                            }
                                            sprintf (temp, "(> %s %s)", var_expresion, var_expresion2) ;
                                            $$.type = BOOL;
                                            $$.code = gen_code (temp) ; }
            ;

//Bloque para los terminos
termino:        operando                           { $$ = $1 ; }                          
            |   '+' operando %prec UNARY_SIGN      { sprintf (temp, "(+ %s)", $2.code) ;
                                                     $$.code = gen_code (temp) ; }
            |   '-' operando %prec UNARY_SIGN      { sprintf (temp, "(- %s)", $2.code) ;
                                                     $$.code = gen_code (temp) ; }    
            ;

//Bloque para los operandos
operando:         IDENTIF                  { sprintf (temp, "%s", $1.code) ;
                                            $$.type = ARIT;
                                           $$.code = gen_code (temp) ; }
            |   NUMBER                   { sprintf (temp, "%d", $1.value) ;
                                            $$.type = ARIT;
                                           $$.code = gen_code (temp) ; }
            
            |    IDENTIF '['expresion ']'     {if ($3.type == ARIT){
                                                sprintf(var_expresion, "%s", $3.code);}
                                                else if($3.type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", $3.code); }}
                                                sprintf (temp, "(aref %s %s)", $1.code, var_expresion) ;
                                                $$.type = ARIT;
                                                $$.code = gen_code (temp) ; }

            |   IDENTIF '(' argumentos_funcion ')'   { sprintf (temp, "(%s %s)", $1.code, $3.code) ;
                                                        $$.code = gen_code (temp) ; 
                                                        $$.type = ARIT;}
            
            |   '(' expresion ')'        { $$ = $2 ; }



%%                            // SECCION 4    Codigo en C

int n_line = 1 ;

void yyerror (char *message)
{
    fprintf (stderr, "%s in line %d\n", message, n_line) ;
    printf ( "\n") ;
}

char *int_to_string (int n)
{
    sprintf (temp, "%d", n) ;
    return gen_code (temp) ;
}

char *char_to_string (char c)
{
    sprintf (temp, "%c", c) ;
    return gen_code (temp) ;
}

char *my_malloc (int nbytes)       // reserva n bytes de memoria dinamica
{
    char *p ;
    static long int nb = 0;        // sirven para contabilizar la memoria
    static int nv = 0 ;            // solicitada en total

    p = malloc (nbytes) ;
    if (p == NULL) {
        fprintf (stderr, "No memoria left for additional %d bytes\n", nbytes) ;
        fprintf (stderr, "%ld bytes reserved in %d calls\n", nb, nv) ;
        exit (0) ;
    }
    nb += (long) nbytes ;
    nv++ ;

    return p ;
}


/***************************************************************************/
/********************** Seccion de Palabras Reservadas *********************/
/***************************************************************************/

typedef struct s_keyword { // para las palabras reservadas de C
    char *name ;
    int token ;
} t_keyword ;

t_keyword keywords [] = { // define las palabras reservadas y los
    "main",        MAIN,           // y los token asociados
    "int",         INTEGER,
    "puts",        PUTS,
    "printf",      PRINTF,
    "while",       WHILE,
    "for",         FOR,
    "if",          IF,
    "return",      RETURN,
    "else",        ELSE,
    ">=",          MAYOR_IGUAL,
    "<=",          MENOR_IGUAL,
    "==",          IGUAL_IGUAL,
    "!=",          DISTINTO,
    "&&",          AND,
    "||",          OR,
    NULL,          0               // para marcar el fin de la tabla
} ;

t_keyword *search_keyword (char *symbol_name)
{                                  // Busca n_s en la tabla de pal. res.
                                   // y devuelve puntero a registro (simbolo)
    int i ;
    t_keyword *sim ;

    i = 0 ;
    sim = keywords ;
    while (sim [i].name != NULL) {
	    if (strcmp (sim [i].name, symbol_name) == 0) {
		                             // strcmp(a, b) devuelve == 0 si a==b
            return &(sim [i]) ;
        }
        i++ ;
    }

    return NULL ;
}

 
/***************************************************************************/
/******************* Seccion del Analizador Lexicografico ******************/
/***************************************************************************/

char *gen_code (char *name)     // copia el argumento a un
{                                      // string en memoria dinamica
    char *p ;
    int l ;
	
    l = strlen (name)+1 ;
    p = (char *) my_malloc (l) ;
    strcpy (p, name) ;
	
    return p ;
}


int yylex ()
{
    int i ;
    unsigned char c ;
    unsigned char cc ;
    char expandable_ops [] = "!<=>|%/&+-*" ;
    char temp_str [256] ;
    t_keyword *symbol ;

    do {
        c = getchar () ;

        if (c == '#') {	// Ignora las lineas que empiezan por #  (#define, #include)
            do {		//	OJO que puede funcionar mal si una linea contiene #
                c = getchar () ;
            } while (c != '\n') ;
        }

        if (c == '/') {	// Si la linea contiene un / puede ser inicio de comentario
            cc = getchar () ;
            if (cc != '/') {   // Si el siguiente char es /  es un comentario, pero...
                ungetc (cc, stdin) ;
            } else {
                c = getchar () ;	// ...
                if (c == '@') {	// Si es la secuencia //@  ==> transcribimos la linea
                    do {		// Se trata de codigo inline (Codigo embebido en C)
                        c = getchar () ;
                        putchar (c) ;
                    } while (c != '\n') ;
                } else {		// ==> comentario, ignorar la linea
                    while (c != '\n') {
                        c = getchar () ;
                    }
                }
            }
        } else if (c == '\\') c = getchar () ;
		
        if (c == '\n')
            n_line++ ;

    } while (c == ' ' || c == '\n' || c == '\r' || c == 10 || c == 13 || c == '\t') ;

    if (c == '\"') {
        i = 0 ;
        do {
            c = getchar () ;
            temp_str [i++] = c ;
        } while (c != '\"' && i < 255) ;
        if (i == 256) {
            printf ("WARNING: string with more than 255 characters in line %d\n", n_line) ;
        }		 	// habria que leer hasta el siguiente " , pero, y si falta?
        temp_str [--i] = '\0' ;
        yylval.code = gen_code (temp_str) ;
        return (STRING) ;
    }

    if (c == '.' || (c >= '0' && c <= '9')) {
        ungetc (c, stdin) ;
        scanf ("%d", &yylval.value) ;
//         printf ("\nDEV: NUMBER %d\n", yylval.value) ;        // PARA DEPURAR
        return NUMBER ;
    }

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        i = 0 ;
        while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9') || c == '_') && i < 255) {
            temp_str [i++] = tolower (c) ;
            c = getchar () ;
        }
        temp_str [i] = '\0' ;
        ungetc (c, stdin) ;

        yylval.code = gen_code (temp_str) ;
        symbol = search_keyword (yylval.code) ;
        if (symbol == NULL) {    // no es palabra reservada -> identificador antes vrariabre
//               printf ("\nDEV: IDENTIF %s\n", yylval.code) ;    // PARA DEPURAR
            return (IDENTIF) ;
        } else {
//               printf ("\nDEV: OTRO %s\n", yylval.code) ;       // PARA DEPURAR
            return (symbol->token) ;
        }
    }

    if (strchr (expandable_ops, c) != NULL) { // busca c en operadores expandibles
        cc = getchar () ;
        sprintf (temp_str, "%c%c", (char) c, (char) cc) ;
        symbol = search_keyword (temp_str) ;
        if (symbol == NULL) {
            ungetc (cc, stdin) ;
            yylval.code = NULL ;
            return (c) ;
        } else {
            yylval.code = gen_code (temp_str) ; // aunque no se use
            return (symbol->token) ;
        }
    }

//    printf ("\nDEV: LITERAL %d #%c#\n", (int) c, c) ;      // PARA DEPURAR
    if (c == EOF || c == 255 || c == 26) {
//         printf ("tEOF ") ;                                // PARA DEPURAR
        return (0) ;
    }

    return c ;
}


int main ()
{
    yyparse () ;
    

}