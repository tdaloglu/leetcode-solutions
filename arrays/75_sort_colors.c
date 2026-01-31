void sortColors(int* nums, int numsSize) {
    int red = 0, white = 0, blue = 0, i;
    for (i=0; i<numsSize; i++) {
        if (nums[i] == 0) red++;
        else if (nums[i] == 1) white++;
        else blue++;
    }
    for (i=0; i<red; i++) nums[i] = 0;
    for (i=red; i<white+red; i++) nums[i] = 1;
    for (i=white+red; i<white+blue+red; i++) nums[i] = 2;
}