#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, input, i;
    bool result = false;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &input);

        if (input == 1) {
            result = true;
        }
    }

    if (result) {
        printf("HARD");
    } else {
        printf("EASY");
    }
    return 0;
}