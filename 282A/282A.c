#include <stdio.h>
#include <string.h>

void scanloop(int *input);

int main() {
    int input;
    int* pointer; 
    pointer = &input;

    scanf("%d", &input);
    scanloop(pointer);

    return 0;
}

void scanloop(int *pointer) {
    int temp = 0;
    for (int i = 0; i < *pointer; i++) {
        char statement[4];
        scanf("%s", statement);

        if (strstr(statement, "++") != 0) {
            temp++;
        } else if (strstr(statement, "--") != 0) {
            temp--;
        }
    }
    printf("%d\n", temp);
}