#include <stdio.h>

int main() {
    int n, k, i, digit = 0;

    scanf("%d %d", &n, &k);

    for (i = 0; i < k; i++) {
        digit = n % 10;
        
        if (digit != 0) {
            n -= 1;
        } else {
            n /= 10;
        }
    }

    printf("%d", n);
    return 0;
}