#include <stdio.h>

int main() {
    double a, b, c;
    printf("Nhap canh thu nhat a: ");
    scanf("%lf", &a);
    printf("Nhap canh thu hai b: ");
    scanf("%lf", &b);
    printf("Nhap canh thu ba c: ");
    scanf("%lf", &c);
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Loi: Cac canh cua tam giac phai la so thuc duong!\n");
    } 
    else if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
            printf("Ba canh %.2lf, %.2lf, %.2lf TAO THANH mot tam giac vuong.\n", a, b, c);
        } else {
            printf("Ba canh %.2lf, %.2lf, %.2lf tao thanh tam giac nhung KHONG PHAI tam giac vuong.\n", a, b, c);
        }
        
    } 
    else {
        printf("Ba canh %.2lf, %.2lf, %.2lf KHONG THE tao thanh mot tam giac!\n", a, b, c);
    }

    return 0;
}
