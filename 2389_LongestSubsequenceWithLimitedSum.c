/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
static int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int check(int *arr, int arrSize, int target) {
    int low = 1, high = arrSize;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > target) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int* answerQueries(int* nums, int numsSize, int* queries, int queriesSize, int* returnSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int f[numsSize + 1];
    f[0] = 0;
    for (int i = 0; i < numsSize; i++) {
        f[i + 1] = f[i] + nums[i];
    }
    int *answer = (int *)calloc(sizeof(int), queriesSize);
    for (int i = 0; i < queriesSize; i++) {
        answer[i] = check(f, numsSize + 1, queries[i]) - 1;
    }
    *returnSize = queriesSize;
    return answer;
}
