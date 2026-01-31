void moveZeroes(int* nums, int numsSize) {
    int i, index = 0;
    for (i=0; i<numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[i];
            nums[i] = nums[index];
            nums[index] = temp;
            index++;
        }
    } 
}