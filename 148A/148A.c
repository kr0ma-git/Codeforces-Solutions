#include <stdio.h>

int main() {
    int k, l, m, n, count = 0, d, i;

    scanf("%d", &k);
    scanf("%d", &l);
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &d);

    if (k == 1 || l == 1 || m == 1 || n == 1) {
        printf("%d", d);
        return 0;
    }

    for (i = 2; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}