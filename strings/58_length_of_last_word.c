int lengthOfLastWord(char* s) {
    int i = strlen(s) - 1, count = 1;
    while (i != 0) {
        if (s[i-1] == ' ' && s[i] != ' ') {
            break;
        }
        if (s[i] != ' ') {
            count++;
        }
        i--;
    }
    return count;
}