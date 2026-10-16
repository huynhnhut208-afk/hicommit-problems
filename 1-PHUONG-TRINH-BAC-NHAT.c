#include <stdio.h>

int main() {
    double a, b; 
    printf("Nhap he so a: ");
    scanf("%lf", &a);
    printf("Nhap he so b: ");
    scanf("%lf", &b);
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem.\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    } else {
        double nghiem = -b / a;
        printf("Phuong trinh co mot nghiem duy nhat: x = %.2lf\n", nghiem);
    }

    return 0;
}
