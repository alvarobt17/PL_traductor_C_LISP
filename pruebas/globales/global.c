prueba () 
{
    int c ;

    c = 56789 ;
    
    puts ("Prueba") ;
    return c+1 ;
}


main ()
{
    int c ;
     
    c = prueba () ;
    printf ("%d %d\n", c, prueba ()) ;

 }

//@ (main)
