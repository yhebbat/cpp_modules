#include <stdio.h>          
#include <stdlib.h>
#include <time.h>

int main() {
    
    printf( "%d\n", rand() );
    printf( "%d\n", rand() );
    printf( "%d\n", rand() );

    srand( time( NULL ) );
    
    printf( "%d\n", rand() );
    printf( "%d\n", rand() );
    printf( "%d\n", rand() );    

    return EXIT_SUCCESS;
}
