#include <stdio.h>

int main() {
    int n; 
    long long giaiThua = 1;{
    printf("Nhap n: ");
    scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            giaiThua *= i;
        }
        printf("%d! = %lld\n", n, giaiThua);
    }

    return 0;
}
