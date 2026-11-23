#include <stdio.h>

int main() {
    double d, tien;
    // Nhập quãng đường di chuyển
    scanf("%lf", &d);
    // Tính tiền theo từng mức
     if (d <= 1) {
        tien = d * 15000;
     } 
     else if (d <= 5) {
        tien = 15000 + (d - 1) * 13000
    } 
     else {
        tien = 15000 + 4 * 13000 + (d - 5) * 11000;
    }

    // Ép kiểu sang số nguyên và in kết quả
    printf("%d\n", (int)tien);

    return 0;
}