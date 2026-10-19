#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) { 
        for (int j = 1; j <= 5; j++) { 
            printf("%dx%2d = %2d\t", j, i, j * i);
        }    
        printf("\n");  
    } 
     printf ("\n");
    for (int i = 1; i <= 10; i++) { 
        for (int j = 6; j <= 10; j++) { 
            printf("%dx%2d = %2d\t", j, i, j * i);
    }
        printf("\n"); 
    }

    return 0;
}
