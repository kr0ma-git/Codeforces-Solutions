#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int i, j;

    scanf("%s", input);
    
    int length = strlen(input);

    for (i = 0; i < length; i++) {
        for (j = 0; j < length - 2; j++) {
            if (input[j] != '+' && input[j + 2] != '+') {
                if (input[j] > input[j + 2]) {
                    int temp = (int) input[j];
                    input[j] = (int) input[j + 2];
                    input[j + 2] = temp;
                }
            }
        } 
    }

    printf("%s", input);
    return 0;
}