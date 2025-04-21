#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, t, i, j;
    char temp;

    scanf("%d %d", &n, &t);

    char* string = (char*) malloc(sizeof(char) * n);
    
    if (string == NULL) {
        printf("Memory allocation failed");
        exit(0);
    }

    scanf(" %[^\n]", string);

    for (i = 0; i < t; i++) {
        for (j = 0; j < n - 1; j++) {
            if (string[j] == 'B' && string[j + 1] == 'G') {
                temp = string[j];
                string[j] = string[j + 1];
                string[j + 1] = temp;
                j++;
            }
        }
    }

    printf("%s", string);

    free(string);
    return 0;
}