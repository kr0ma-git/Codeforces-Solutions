#include <stdio.h>

int main() {
    int n, i, prevMax = 0, prevMin = 0, max = 0, min = 0;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    prevMax = arr[0];
    prevMin = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > prevMax) {
            max = i;
            prevMax = arr[i];
        }
        if (arr[i] <= prevMin) {
            min = i;
            prevMin = arr[i];
        }
    }

    int totalSeconds = (n - 1 - min) + max;

    if (max > min)
        totalSeconds--;
    
    printf("%d", totalSeconds);
    return 0;
}