int check(char s) {
    const char letters[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    for (int i=0; i<10; i++) {
        if (s == letters[i]) {
            return 1;
        }
    }
    return 0;
}

char* reverseVowels(char* s) {
    int len = strlen(s);
    char temp[len];
    int index = 0;
    for (int i=0; i<len; i++) {
        if (check(s[i])) {
            temp[index] = s[i];
            index++;
        }
    }
    index--;
    for (int i=0; i<len; i++) {
        if (check(s[i])) {
            s[i] = temp[index];
            index--;
        }
    }
    return s;
}