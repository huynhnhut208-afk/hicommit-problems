#include <stdio.h>
int main() {
    double dtb;
    if (scanf("%lf", &dtb) == 1) {
        if (dtb >= 9.0) {
            printf("A\n");
        } else if (dtb >= 8.0) {
            printf("B+\n");
        } else if (dtb >= 7.0) {
            printf("B\n");
        } else if (dtb >= 6.5) {
            printf("C+\n");
        } else if (dtb >= 5.5) {
            printf("C\n");
        } else if (dtb >= 5.0) {
            printf("D+\n");
        } else if (dtb >= 4.0) {
            printf("D\n");
        } else {
            printf("F\n");
        }
    }
    return 0;
}
