#include <stdio.h>
#include <string.h>

int main() {
    char username[100];
    int i, distinct = 0, seen[26] = {0};

    scanf("%[^\n]", username);

    for (i = 0; username[i] != '\0'; i++) {
        int index = username[i] - 'a'; // converts ASCII characters inter integers, 'a' has an ASCII value of 97 which is why it is subtracted from the username[i]
        if (!seen[index]) {
            seen[index] = 1;
            distinct++;
        }
    }

    if (distinct % 2 == 0) {
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }
    return 0;
}