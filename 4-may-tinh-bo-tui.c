#include <stdio.h>

int main() {
    double a, b;
    char toan_tu;
    printf("Nhap so thuc thu nhat a: ");
    scanf("%lf", &a);
    printf("Nhap so thuc thu hai b: ");
    scanf("%lf", &b);
    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &toan_tu);
    switch (toan_tu) {
        case '+':
            printf("Ket qua: %.2lf + %.2lf = %.2lf\n", a, b, a + b);
            break;
        case '-':
            printf("Ket qua: %.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;
        case '*':
            printf("Ket qua: %.2lf * %.2lf = %.2lf\n", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Loi: Khong the chia cho so 0!\n");
            } else {
                printf("Ket qua: %.2lf / %.2lf = %.2lf\n", a, b, a / b);
            }
            break;
        default:
            printf("Loi: Toan tu khong hop le! Vui long chi nhap +, -, * hoac /.\n");
            break;
    }

    return 0;
}
