#include <stdio.h>
#define PI 3.14
int main() {
    float day_lon = 50;
    float day_be = 23.0;
    float chieu_cao = 30;
    float chu_vi_bon_hoa = 12.56;
    float dien_tich_san, dien_tich_bon_hoa, dien_tich_con_lai;
    dien_tich_san = (day_lon + day_be) * chieu_cao / 2;
    dien_tich_bon_hoa = (chu_vi_bon_hoa * chu_vi_bon_hoa) / (4 * PI);
    dien_tich_con_lai = dien_tich_san - dien_tich_bon_hoa;
    printf("Dien tich san truong: %.2f m2\n", dien_tich_san);
    printf("\nDien tich bon hoa: %.2f m2\n", dien_tich_bon_hoa);
    printf("\nDien tich con lai cua san truong: %.2f m2\n", dien_tich_con_lai);
    return 0;
}
