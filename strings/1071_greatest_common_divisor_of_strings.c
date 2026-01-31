#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int check(char* str, int len, int gcd_len) {
    for (int i = 0; i < len; i++) {
        if (str[i] != str[i % gcd_len]) {
            return 0;  
        }
    }
    return 1;  
}

char* gcdOfStrings(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    
    char* concat1 = (char*)malloc((len1 + len2 + 1) * sizeof(char));
    char* concat2 = (char*)malloc((len1 + len2 + 1) * sizeof(char));

    if (!concat1 || !concat2) return NULL; 

    strcpy(concat1, str1);
    strcat(concat1, str2);

    strcpy(concat2, str2);
    strcat(concat2, str1);

    if (strcmp(concat1, concat2) != 0) {
        free(concat1);
        free(concat2);
        return "";
    }

    free(concat1);
    free(concat2);


    int gcd_len = gcd(len1, len2);

    
    char* result = (char*)malloc((gcd_len + 1) * sizeof(char));
    if (!result) return NULL;

    strncpy(result, str1, gcd_len);
    result[gcd_len] = '\0';

    return result;
}