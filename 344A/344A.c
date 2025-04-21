#include <stdio.h>

int main() {
    int n, input[100000], i, count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }

    for (i = 0; i < n; i++) {
        if (input[i] != input[i + 1]) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}