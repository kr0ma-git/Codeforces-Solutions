#include <stdio.h>
#include <string.h>

int main() {
    int n, a, b, lastIndex;
    char array[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", array);
        a = strlen(array);
        if (a > 10) {
            b = a - 2;
            lastIndex = a - 1;
            printf("%c%d%c\n", array[0], b, array[lastIndex]);
        } else {
            printf("%s\n", array);
        }
    }
    return 0;
} 

/* #include stdio.h>
#include <string.h>

int main() {
    int n, x, y;
    char word[n][101];

    for (int i = 0; i < n; i++) {
        scanf("%s", word[i]);
        x = strlen(word[i]);
        y = x - 1;

        if (x > 10) {
            printf("%c%d%c\n", word[i][0], x - 2, word[i][y]);
        } else {
            printf("%s\n", word[i]);
        }
    }
    return 0;
} */