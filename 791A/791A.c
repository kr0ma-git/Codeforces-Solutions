#include <stdio.h>

int main() {
    int a, b, year;

    scanf("%d %d", &a, &b);

    for (year = 1;; year++) {
        a *= 3;
        b *= 2;

        if (a > b) {
            break;
        } else {
            continue;
        }
    }

    printf("%d", year);
    return 0;
}