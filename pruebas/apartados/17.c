#include <stdio.h>

cuadrado (int v) {
    return (v*v) ;
}

factorial (int n) {
    int f ;
    if (n == 1) {
        f = 1 ;
    } else {
        f = n * factorial (n-1) ;
    }
    return f ;
}

es_par (int v) {
    int ep ;
    printf ("%d", v) ;
    if (v % 2 == 0) {
        puts (" es par") ;
        ep = 1 ;
    } else {
        puts (" es impar") ;
        ep = 0 ;
    }
    return ep ;
}

main () {
    printf ("%d\n", cuadrado (7)) ;
    printf ("%d\n", factorial (7)) ;
    printf ("%d\n", es_par (7)) ;
    es_par (8) ;
}
