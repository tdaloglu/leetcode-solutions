int check(char* haystack, int start, int end, char* needle) {
    int i, j = 0;
    for (i=start; i<end; i++) {
        if (haystack[i] != needle[j]) {
            return 0;
        }
        j++;
    }
    return 1;
}

int strStr(char* haystack, char* needle) {
    int len1 = strlen(haystack), len2 = strlen(needle);
    int i;
    for (i=0; i<=len1 - len2; i++) {
        if (check(haystack, i, i+len2, needle)) {
            return i;
        }
    }
    return -1;
}