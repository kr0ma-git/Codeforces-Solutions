#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char arr[1000];

    scanf("%s", arr);
    
    int size = strlen(arr);

    if (isupper(arr[0])) {
        printf("%s", arr);
    } else {
        printf("%c", toupper(arr[0]));
        
        int i;

        for (i = 1; i < size; i++) {
            printf("%c", arr[i]);
        }
    }
    return 0;
}