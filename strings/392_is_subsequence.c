#include <stdbool.h>

bool isSubsequence(char* s, char* t) {
    int i=0, j=0;
    int len1 = strlen(s), len2 = strlen(t);
    while (s[i] != '\0' && t[j] != '\0') {
        if (s[i] == t[j]) {
            i++;
            j++;
        } else {
            j++;
        }
    }
    if (i == len1) {
        return true;
    } else {
        return false;
    }
}