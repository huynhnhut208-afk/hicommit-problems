#include <stdio.h>

int main() {
    double w, h;
    if (scanf("%lf %lf", &w, &h) == 2) {
        double height_m = h / 100.0;
        double bmi = w / (height_m * height_m);    
        if (bmi < 18.5) {
            printf("UNDERWEIGHT\n");
        } else if (bmi < 25.0) {
            printf("NORMAL\n");
        } else if (bmi < 35.0) {
            printf("OVERWEIGHT\n");
        } else {
            printf("OBESE\n");
        }
    }
    return 0;
}