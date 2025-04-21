#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char string1[101], string2[101];
    int i, comp;

    scanf("%s %s", string1, string2);

    for (i = 0; string1[i]; i++) {
        string1[i] = tolower(string1[i]);
    }

    for (i = 0; string2[i]; i++) {
        string2[i] = tolower(string2[i]);
    }

    comp = strcmp(string1, string2);

    if (comp < 0)
        printf("-1");
    else if (comp > 0)
        printf("1");
    else if (comp == 0)
        printf("0");
    return 0;
}