

test (int a, int b) {
    if (a-b) {
    puts ("Different") ;
    } else {
        puts ("Equal") ;

        if(a+b < c){
            puts("a+b < c");
        }
        
        if (c < a+b){
            puts("c < a+b");
        }
    }
}
main () {
    test (1, 1) ;
    test (1, 2) ;
    test (2, 1) ;
}