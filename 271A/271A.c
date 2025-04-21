#include <stdio.h>
#include <stdbool.h>

int main() {
    int y, digits[4], i, j, temp = 0;
    bool notUnique = true;

    scanf("%d", &y);

    while (notUnique) {
        y++;
        temp = y;

        for (i = 0; i < 4; i++) {
            digits[i] = temp % 10;
            temp /= 10;
        }

        notUnique = false;

        for (i = 0; i < 4; i++) {
            for (j = i + 1; j < 4; j++) {
                if (digits[i] == digits[j]) {
                    notUnique = true;
                    break;
                }
            }
            if (notUnique)
                break;
        }
    }

    printf("%d", y);
    return 0;
}