#include <stdio.h>

int main() {
    int n, goc;
    int soDaoNguoc = 0;
    int tongChuSo = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    goc = n; 
    int temp = (n < 0) ? -n : n;

    while (temp > 0) {
        int chuSo = temp % 10;                
        tongChuSo += chuSo;                   
        soDaoNguoc = soDaoNguoc * 10 + chuSo;
        temp /= 10;                          
    }
    if (goc < 0) {
        soDaoNguoc = -soDaoNguoc;
    }
    printf("SO DAO NGUOC CUA %d lA: %d\n", goc, soDaoNguoc);
    printf("TONG CAC SO CUA %d LA: %d\n", goc, tongChuSo);

    return 0;
}
