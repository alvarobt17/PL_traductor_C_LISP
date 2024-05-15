

int array [100] ;
int m ;

funcion() {
    puts("hola");
}

main ()
{
    int i ;

    m = 30 ;

    i = 1 ; 
    array [0] = 1 ;
    while (i <= m) { 
        array [i] = array [i-1] * 2 ;
        i = i + 1 ;
    }

    funcion();

    i = 1 ; 
    while (i <= m) { 
        printf (" %d %d\n", i, array [i]) ;
        i = i + 1 ;
    }
}

//@ (main)
