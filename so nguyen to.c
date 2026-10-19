#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool laSoNguyenTo = true;
    printf("nhap snt n: ");
    scanf("%d", &n);
    if (n < 2) {
        laSoNguyenTo = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                laSoNguyenTo = false; 
                break;               
            }
        }
    }
    if (laSoNguyenTo) {
        printf("%d LA SO NGUYEN TO.\n", n);
    } else {
        printf("%d KHONG LA SO NGUYEN TO.\n", n);
    }

    return 0;
}
