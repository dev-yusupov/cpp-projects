#include <stdio.h>
#define MESSAGE "Google"


int main() {
    #ifdef DEBUG
        printf("Debug mode is on! \n");
    
    #else
        printf("Debug mode is off! \'\' \n");
    
    #endif

    printf( MESSAGE );

    printf("Number: \377");

    return 0;
}