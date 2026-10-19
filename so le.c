#include <stdio.h>

int main() {
    int n;
    long long tong = 0; 

    printf("Nhap vao so nguyen duong n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Vui long nhap mot so nguyen khong am!\n");
        return 1;
    }
    for (int i = 1; i <= n; i += 2) {
        tong += i;
    }
    printf("Tong cac so le tu 0 den %d la: %lld\n", n, tong);

    return 0;
}
