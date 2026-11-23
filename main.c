#include <stdio.h>
int main(void) {
    int d, m, y;
    int count = scanf("%d %d %d", &d, &m, &y);
    if (count != 3) {
        return 0;
    }
    if (y <= 0 || m < 1 || m > 2 || d < 1) {
        printf("INVALID\n");
    } else {
        int max_days;
      if (m == 4 || m == 6 || m == 9 || m == 11) {
            max_days = 30;
     } else if (m == 2) {
      if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
                max_days = 29;
     } else {
                max_days = 28;
            }
      } else {
            max_days = 31;
        }
        if (d <= max_days) {
            printf("VALID\n");
        } else {
            printf("INVALID\n");
        }
    }
    return 0;
}
       