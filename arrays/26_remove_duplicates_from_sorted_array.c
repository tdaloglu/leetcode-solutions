int removeDuplicates(int* nums, int numsSize) {
    int i, index = 0, count = 0;
    int array[numsSize];
    for (i=0; i<numsSize-1; i++) {
        if (nums[i] != nums[i+1]) {
            array[index] = nums[i];
            index++;
            count++;
        }
    }
    array[index] = nums[numsSize-1];
    for (i=0; i<count+1; i++) {
        nums[i] = array[i];
    }
    return count+1;
}