#include <stdio.h>

int main() {
    int n, p, q, i, count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &p, &q);

        if (p + 2 <= q) {
            count++;
        } 
    }

    printf("%d", count);
    return 0;
}