#include <stdio.h>
int main() {
    int a{1,2,3,4,5};
    if (scanf("%d", &a) == 1) {
        switch (a) {
            case 1:
                printf("XEP_LOAI_XUAT_SAC\n");
                break;
            case 2:
                printf("XEP_LOAI_GIOI\n");
                break;
            case 3:
                printf("XEP_LOAI_KHA\n");
                break;
            case 4:
                printf("XEP_LOAI_TRUNG_BINH\n");
                break;
            default:
                printf("KHONG_HOP_LE\n");
                break;
        }
    }
    return 0;
}