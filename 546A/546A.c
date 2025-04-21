#include <stdio.h>

int main() {
    int cost, money, bananas, total = 0, i;

    scanf("%d %d %d", &cost, &money, &bananas);

    for (i = 1; i <= bananas; i++) {
        total += cost * i;
    }

    total = total - money;

    if (total <= 0) {
        printf("0");
    } else {
        printf("%d", total);
    }
    return 0;
}