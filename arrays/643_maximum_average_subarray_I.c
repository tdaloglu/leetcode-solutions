int sum(int* nums, int start, int end) {
    int result = 0;
    int i;
    for (i=start; i<end; i++) {
        result += nums[i];
    }
    return result;
}

double findMaxAverage(int* nums, int numsSize, int k) {
    int currentSum = sum(nums, 0, k);
    int maxSum = currentSum;

    for (int i = k; i < numsSize; i++) {
        currentSum = currentSum - nums[i - k] + nums[i];  // Eski elemanı çıkar, yeni elemanı ekle
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum / (double)k;
}