#include <stdio.h>
#include <math.h>
int laSoNguyenTo(int n) {
    if (n < 2) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    printf("Cac so nguyen to trong khoang tu 1 den %d la:\n", n);
    
    int dem = 0;
    for (int i = 1; i <= n; i++) {
        if (laSoNguyenTo(i)) {
            printf("%d ", i);
            dem++;
        }
    }
    if (dem == 0) {
        printf("Khong co so nguyen to nao trong khoang nay.");
    }

    printf("\n");
    return 0;
}
