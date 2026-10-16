#include <stdio.h>

int main() {
    int n;
    printf("Nhap vao mot nam bat ky n: ");
    scanf("%d", &n);
    if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) {
        printf("Nam %d la nam nhuan.\n", n);
    } else {
        printf("Nam %d khong phai la nam nhuan.\n", n);
    }

    return 0;
}
