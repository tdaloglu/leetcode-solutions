int majorityElement(int* nums, int numsSize) {
    int number = nums[0], count = 1;
    for (int i=1; i<numsSize; i++) {
        if (nums[i] == number) {
            count++;
        } else {
            count--;
            if (count == 0) {
                number = nums[i];
                count = 1;
            }
        }
    }
    count = 0;
    for (int i=0; i<numsSize; i++) {
        if (nums[i] == number) {
            count++;
        }
    }
    if (count > numsSize/2) {
        return number;
    }
    return -1;
}