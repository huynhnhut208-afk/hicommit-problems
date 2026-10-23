#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        switch (n) {
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