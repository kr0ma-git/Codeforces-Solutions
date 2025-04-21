#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, input[100], temp = 0;

    scanf("%d", &n);

    int* result = (int*) malloc(sizeof(int) * n);

    for (i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }

    for (i = 0; i < n; i++) {
        result[input[i] - 1] = i + 1;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    
    free(result);
    return 0;
}