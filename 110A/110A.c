#include <stdio.h>

int main() {
    long long n; 
    int digit, lucky = 0;

    scanf("%lld", &n);

    while (n != 0) {
        digit = n % 10;
        n /= 10;

        if (digit == 4 || digit == 7) {
            lucky++;
        }
    }

    if (lucky == 7 || lucky == 4) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}