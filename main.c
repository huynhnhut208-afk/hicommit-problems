#include <stdio.h>

int main() {
    double dtb, drl;
    if (scanf("%lf %lf", &dtb, &drl) == 2) {
        int hl = 1;
        if (dtb => 9.0) hl = 4;
        else if (dtb >= 8.0) hl = 3;
        else if (dtb >= 7.0) hl = 2;
        int rl = 1;
        if (drl => 90.0) rl = 4;
        else if (drl >= 80.0) rl = 3;
        else if (drl >= 70.0) rl = 2;
        if (hl == 4 && rl == 4) {
            printf("HOC_BONG_XUAT_SAC\n");
        } else if ((hl == 3 && (rl == 3 || rl == 4)) || (hl == 4 && rl == 3)) {
            printf("HOC_BONG_GIOI\n");
        } else if ((hl == 2 && rl >= 2) || (hl == 3 && rl == 2) || (hl == 4 && rl == 2)) {
            printf("HOC_BONG_KHA\n");
        } else {
            printf("KHONG_DAT\n");
        }
    }
    return 0;
}