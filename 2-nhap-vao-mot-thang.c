#include <stdio.h>

int main() {
    int thang, nam;
    printf("Nhap vao mot thang (1-12): ");
    scanf("%d", &thang);
    
    switch (thang) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Thang %d co 31 ngay.\n", thang);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Thang %d co 30 ngay.\n", thang);
            break;
        case 2:
            printf("Nhap vao nam: ");
            scanf("%d", &nam);
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
                printf("Thang 2 nam %d co 29 ngay (Nam nhuan).\n", nam);
            } else {
                printf("Thang 2 nam %d co 28 ngay.\n", nam);
            }
            break;
        default:
            printf("Loi: Thang nhap vao khong hop le! Vui long nhap tu 1 den 12.\n");
            break;
    }

    return 0;
}




