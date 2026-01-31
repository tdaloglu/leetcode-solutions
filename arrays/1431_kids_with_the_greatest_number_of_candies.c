#include <stdbool.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int findGreatest(int* nums, int numsSize) {
    int biggest = nums[0];
    for (int i=0; i<numsSize; i++) {
        if (nums[i] > biggest) {
            biggest = nums[i];
        }
    }
    return biggest;
}

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    *returnSize = candiesSize;
    bool* result = (bool*)malloc(candiesSize*sizeof(bool));
    int biggest = findGreatest(candies, candiesSize);
    for (int i=0; i<candiesSize; i++) {
        if (candies[i] + extraCandies >= biggest) {
            result[i] = true;
        } else {
            result[i] = false;
        }
    }
    return result;
}