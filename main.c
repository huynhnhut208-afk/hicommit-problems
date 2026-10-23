#include <stdio.h>

int main() {
    float w, h;
    if (scanf("%f %f", &w, &h) == 2) {
        float bmi = (w * 10000.0f) / (h * h);
        
        if (bmi < 18.5f) {
            printf("UNDERWEIGHT\n");
        } else if (bmi < 25.0f) {
            printf("NORMAL\n");
        } else if (bmi < 30.0f) {
            printf("OVERWEIGHT\n");
        } else {
            printf("OBESE\n");
        }
    }
    return 0;
}