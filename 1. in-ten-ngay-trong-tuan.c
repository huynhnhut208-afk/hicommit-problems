#include <stdio.h>

int main() {
    int ngay;
    printf("Nhap vao mot so nguyen (1-7): ");
    scanf("%d", &ngay);
    switch (ngay) {
        case 1:
            printf("Chu Nhat\n");
            break;
        case 2:
            printf("Thu Hai\n");
            break;
        case 3:
            printf("Thu Ba\n");
            break;
        case 4:
            printf("Thu Tu\n");
            break;
        case 5:
            printf("Thu Nam\n");
            break;
        case 6:
            printf("Thu Sau\n");
            break;
        case 7:
            printf("Thu Bay\n");
            break;
        default:
            printf("Loi: So nhap vao phai nam trong khoang tu 1 den 7!\n");
            break;
    }

    return 0;
}
