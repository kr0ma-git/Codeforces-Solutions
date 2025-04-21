#include <stdio.h>

int main() {
    int x, moves = 0;

    scanf("%d", &x);

    while (x > 0) {
        if (x >= 5) {
            moves++;
            x -= 5;
        } else if (x >= 4) {
            moves++;
            x -= 4;
        } else if (x >= 3) {
            moves++;
            x -= 3;
        } else if (x >= 2) {
            moves++;
            x -= 2;
        } else if (x == 1) {
            x--;
            moves++;
        }
    }

    printf("%d", moves);
    return 0;
}