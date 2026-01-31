void sortedArray(int* nums, int numsSize) {
    int i, unsorted = 1;
    while (unsorted) {
        unsorted = 0;
        for (i=0; i<numsSize-1; i++) {
            if (nums[i] > nums[i+1]) {
                unsorted = 1;
                int temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
            }
        }
    }
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int temp[nums1Size];
    int i;
    for (i=0; i<m; i++) {
        temp[i] = nums1[i];
    }
    for (i=m; i<nums1Size; i++) {
        temp[i] = nums2[i-m];
    }
    sortedArray(temp, nums1Size);
    for (i=0; i<nums1Size; i++) {
        nums1[i] = temp[i];
    }
}