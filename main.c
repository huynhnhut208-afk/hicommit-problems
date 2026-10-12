#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n % 2 == 0) {
            printf("CHAN\n");
        } else {
            printf("LE\n");
        }
    }
    
    return 0;
}