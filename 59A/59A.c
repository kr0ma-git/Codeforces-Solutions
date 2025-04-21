#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    int countUp = 0, countLo = 0, size, i;

    scanf("%[^\n]", word);

    size = strlen(word);

    for (i = 0; i < size; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            countUp++;
        } else if (word[i] >= 'a' && word[i] <= 'z') {
            countLo++;
        }
    }
    
    if (countUp > countLo) {
        for (i = 0; i < size; i++) {
            word[i] = toupper(word[i]);
        }
    } else if (countLo > countUp) {
        for (i = 0; i < size; i++) {
            word[i] = tolower(word[i]);
        }
    } else if (countUp == countLo) {
        for (i = 0; i < size; i++) {
            word[i] = tolower(word[i]);
        }
    }

    printf("%s", word);
    return 0;
}