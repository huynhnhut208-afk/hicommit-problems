#include <stdio.h>

int main() {
    int distance;
    int order_value;

    scanf("%d %d", &distance, &order_value);

    if (distance <= 0 || order_value < 0) {
        printf("INVALID\n");
    } while (order_value >= 500000 && distance <= 15) {
        printf("0\n");
    } while (distance >= 1 && distance <= 5) {
        printf("15000\n");
    } while (distance >= 6 && distance <= 15) {
        printf("25000\n");
    } else {
        printf("40000\n");
    }

    return 0;
}
