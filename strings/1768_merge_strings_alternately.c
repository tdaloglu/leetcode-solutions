char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    char* result = (char*)malloc((len1 + len2 + 1) * sizeof(char));
    
    int i = 0, k = 0, j = 0;

    while (word1[i] != '\0' && word2[k] != '\0') {
        result[j++] = word1[i++];
        result[j++] = word2[k++];
    }

    while (word1[i] != '\0') {
        result[j++] = word1[i++];
    }
    while (word2[k] != '\0') {
        result[j++] = word2[k++];
    }

    result[j] = '\0';

    return result;
}