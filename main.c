#include <stdio.h>

int main() {
    int k;
    if (scanf("%d", &k) != 1) return 0;

    long long total = 0;
    
    if (k <= 50) {
        total = (long long)k * 1678;
    } else if (k <= 100) {
        total = 50LL * 1678 + (long long)(k - 50) * 1734;
    } else if (k <= 200) {
        total = 50LL * 1678 + 50LL * 1734 + (long long)(k - 100) * 2014;
    } else if (k <= 300) {
        total = 50LL * 1678 + 50LL * 1734 + 100LL * 2014 + (long long)(k - 200) * 2536;
    } else if (k <= 400) {
        total = 50LL * 1678 + 50LL * 1734 + 100LL * 2014 + 100LL * 2536 + (long long)(k - 300) * 2834;
    } else {
        total = 50LL * 1678 + 50LL * 1734 + 100LL * 2014 + 100LL * 2536 + 100LL * 2834 + 2927LL * (k - 400);
    }
    
    printf("%lld\n", total);
    return 0;
}