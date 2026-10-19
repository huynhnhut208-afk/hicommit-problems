#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n < 1) {
        printf(" nhap so lon hon hoac bang 1.\n");
        return 1;
    }
    printf("\nCac so le trong khoang tu 1 den %d la:\n", n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n\nCac so chan trong khoang tu 1 den %d la:\n", n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
