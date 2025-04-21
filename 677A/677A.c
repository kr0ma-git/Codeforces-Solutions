#include <stdio.h>

int main() {
    int n, height, input[1000], i, count1 = 0, count2 = 0;

    scanf("%d %d", &n, &height);

    for (i = 0; i < n; i++) {
        scanf("%d", &input[i]);

        if (input[i] <= height) {
            count1++;
        } else {
            count2 += 2;
        }
    }

    printf("%d", count1 + count2);
    return 0;
}