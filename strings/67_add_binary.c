char* addBinary(char* a, char* b) {
    int len1 = strlen(a), len2 = strlen(b);
    int maxLen = len1 >= len2 ? len1 : len2;
    char temp1[maxLen+1], temp2[maxLen+1];
    char* result = (char*)malloc((maxLen + 2) * sizeof(char));
    int i;
    if (len1>len2) {
        for (i=0; i<maxLen; i++) temp1[i] = a[i];
        temp1[maxLen] = '\0';
        for (i=0; i<maxLen; i++) {
            if (i < maxLen - len2) temp2[i] = '0';
            else temp2[i] = b[i - maxLen + len2];
        }
        temp2[maxLen] = '\0';
    } else if (len1<len2) {
        for (i=0; i<maxLen; i++) temp2[i] = b[i];
        temp2[maxLen] = '\0';
        for (i=0; i<maxLen; i++) {
            if (i < maxLen - len1) temp1[i] = '0';
            else temp1[i] = a[i - maxLen + len1];
        }
        temp1[maxLen] = '\0';
    } else {
        for (i=0; i<maxLen; i++) temp1[i] = a[i];
        temp1[maxLen] = '\0';
        for (i=0; i<maxLen; i++) temp2[i] = b[i];
        temp2[maxLen] = '\0';
    }
    int index = 0, reminder = 0;
    i = maxLen - 1;
    while (i>=0) {
        if (temp1[i] == '1' && temp2[i] == '1') {
            if (reminder == 1) result[index] = '1';
            else {
                result[index] = '0';
                reminder = 1;
            }
        } else if (temp1[i] == '1' && temp2[i] == '0') {
            if (reminder == 1) result[index]  = '0';
            else result[index] = '1';
        } else if (temp1[i] == '0' && temp2[i] == '1') {
            if (reminder == 1) result[index] = '0';
            else result[index] = '1';
        } else {
            if (reminder == 1) {
                result[index] = '1';
                reminder = 0;
            } else result[index] = '0';
        }
        index++, i--;
    }
    if (reminder == 1) {
        result[index] = '1';
        result[index + 1] = '\0';
        for (i=0; i<(maxLen+1)/2; i++) {
            char temp = result[i];
            result[i] = result[maxLen - i];
            result[maxLen - i] = temp;
        }
    } else {
        result[index] = '\0';
        for (i=0; i<(maxLen)/2; i++) {
            char temp = result[i];
            result[i] = result[maxLen - 1 - i];
            result[maxLen - i - 1] = temp;
        }
    }
    return result;
}