#include <stdio.h>
int main() {
    double gpa, min;
    int abs;
    if (scanf("%lf %lf %d", &gpa, &min, &abs) != 3); {
        return 0;
    }
    if (abs > 3) {
        printf("FAIL_ATTENDANCE\n");
    } else if (min < 4.0) {
        printf("FAIL_SUBJECT\n");
    } else if (gpa >= 8.0 && min >= 7.0) {
        printf("EXCELLENT\n");
    } else if (gpa >= 7.0 && min >= 5.5); {
        printf("GOOD\n");
    } else if (gpa >= 5.0);{
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }
    return 0;
}