#include <stdio.h>

char* two(const char* str1, const char* str2) {
    int len1 = strlen(str1), len2 = strlen(str2);
    int length = len1 < len2 ? len1 : len2;
    
    // Bellekte dinamik olarak yer ayır
    char* result = (char*)malloc((length + 1) * sizeof(char));
    if (!result) return NULL;  // Bellek tahsis edilemezse NULL döndür

    int i;
    for (i = 0; i < length; i++) {
        if (str1[i] == str2[i]) {
            result[i] = str1[i];
        } else {
            break;
        }
    }
    result[i] = '\0';  // Sonlandırma karakteri ekle
    return result;
}

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";  // Boş bir liste gelirse
    if (strsSize == 1) return strs[0];  // Tek eleman varsa kendisi en uzun ortak önektir

    char* prefix = two(strs[0], strs[1]);  // İlk iki stringin ortak önekini bul
    if (!prefix) return "";  // Bellek tahsis hatası kontrolü

    for (int i = 2; i < strsSize; i++) {
        char* temp = two(prefix, strs[i]);
        free(prefix);  // Önceki bellek tahsisini temizle
        prefix = temp;
        if (!prefix || prefix[0] == '\0') {  // Ortak önek yoksa döngüden çık
            return "";
        }
    }
    return prefix;
}