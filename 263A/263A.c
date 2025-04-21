#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5][5];
    int i, j, row, col;

    for (i = 0; i < 5; i++) {        
        for (j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1) {
                row = i + 1;
                col = j + 1;
            }
        }
    }
    printf("%d", abs(row - 3) + abs(col - 3));
    return 0;
}