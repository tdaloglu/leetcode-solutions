/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int reminder = 1, i;
    for (i=digitsSize-1; i>=0; i--) {
        if (digits[i] == 9 && reminder == 1) digits[i] = 0;
        else if (digits[i] != 9 && reminder == 1) {
            digits[i] = digits[i] + 1;
            reminder = 0;
        }
    }
    int zero = 1;
    for (i=0; i<digitsSize; i++) {
        if (digits[i] != 0) zero = 0;
    }
    if (zero == 1) {
        int* result = (int*)malloc((digitsSize + 1) * sizeof(int));
        result[0] = 1;
        for (i=1; i<digitsSize+1; i++) result[i] = 0;
        *returnSize = digitsSize + 1;
        return result;
    } else {
        int* result = (int*)malloc(digitsSize * sizeof(int));
        for (i=0; i<digitsSize; i++) result[i] = digits[i];
        *returnSize = digitsSize;
        return result;
    }
}