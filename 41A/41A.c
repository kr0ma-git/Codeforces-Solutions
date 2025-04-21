#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[101], t[101];
    int sizeS, sizeT, i, count = 1;

    scanf("%s", s); // code
    scanf("%s", t); // edoc

    sizeS = strlen(s);
    sizeT = strlen(t);

    if (sizeS != sizeT)
        count = 0;
    else {
        for (i = 0; i < sizeS; i++) {
            if (s[i] != t[(sizeT - 1) - i]) {
                count = 0;
                break;
            } else {
                continue;
            }
        }
    }
    
    if (count) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}