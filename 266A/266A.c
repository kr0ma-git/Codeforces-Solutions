#include <stdio.h>

int main() {
    int n, removals = 0, i;
    char colors[50];

    scanf("%d", &n);
    scanf("%s", colors);

    for (i = 1; i < n; i++) {
        if (colors[i] ==  colors[i - 1]) {
            removals++;
        }
    }

    printf("%d", removals);
    return 0;
}