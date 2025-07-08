int findPeakElement(int* nums, int numsSize) {
    int left = -1, right = numsSize - 1; 
    while (left + 1 < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] > nums[mid + 1]) {
            right = mid;
        } else {
            left = mid;
        }
    }
    return right;
}
