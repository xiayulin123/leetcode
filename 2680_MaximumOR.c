#define MAX(a, b) ((b) > (a) ? (b) : (a))


long long maximumOr(int* nums, int numsSize, int k) {
    long long ans = 0;
    int* max = malloc(numsSize * sizeof(int));
    max[numsSize - 1] = 0;
    for (int i = numsSize - 2; i >= 0; i--) {
        max[i] = max[i + 1] | nums[i + 1];
    }
    int pre = 0;
    for (int i = 0; i < numsSize; i++) {
        int x = nums[i];
        ans = MAX(ans, pre | ((long long) x << k) | max[i]);
        pre |= x;
    }
    return ans;
}
