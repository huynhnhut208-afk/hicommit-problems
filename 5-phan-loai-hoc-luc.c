#include <stdio.h>

int main() {
    double diem;
    printf("Nhap diem so cua hoc sinh (0 - 10): ");
    scanf("%lf", &diem);
    if (diem < 0.0 || diem > 10.0) {
        printf("Loi: Diem so phai nam trong khoang tu 0 den 10!\n");
    } 
    else {
        if (diem >= 8.0) {
            printf("Hoc luc: Gioi (%.1lf)\n", diem);
        } 
        else if (diem >= 6.0) { 
            printf("Hoc luc: Kha (%.1lf)\n", diem);
        } 
        else if (diem >= 4.0) { 
            printf("Hoc luc: Trung binh (%.1lf)\n", diem);
        } 
        else { 
            printf("Hoc luc: Yeu (%.1lf)\n", diem);
        }
    }

    return 0;
}
