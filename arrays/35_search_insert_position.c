int searchInsert(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize-1, index = 0;
    while (left < right) {
        index = (left + right) / 2;
        if (nums[index] == target) {
            return index;
        } else if (nums[index] < target) {
            left = index+1;
        } else {
            right = index - 1;
        }
    }
    if (nums[left] < target) {
        return left + 1;
    } else {
        return left;
    }
}