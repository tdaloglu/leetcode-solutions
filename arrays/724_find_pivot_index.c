int left(int *nums, int numsSize, int i) {
    int sum = 0;
    for (int j = 0; j<i; j++) {
        sum += nums[j];
    }
    return sum;
}

int right(int* nums, int numsSize, int i) {
    int sum = 0;
    for (int j=i+1; j<numsSize; j++) {
        sum += nums[j];
    }
    return sum;
}

int pivotIndex(int* nums, int numsSize) {
    for (int i=0; i<numsSize; i++) {
        if (left(nums, numsSize, i) == right(nums, numsSize, i)) {
            return i;
        }
    }
    return -1;
}