#include <stdio.h>

int main() {
    int n, k, places = 0;

    scanf("%d %d", &n, &k);

    int array[n];

    for (int i = 0; i < n; i++) { 
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        if (array[i] >= array[k - 1] && array[i] > 0) {
            places++;
        }   
    }

    printf("%d", places);
    
    return 0;
}