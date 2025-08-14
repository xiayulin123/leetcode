/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* secondGreaterElement(int* nums, int numsSize, int* returnSize) {
    int* ans   = malloc(sizeof(int) * numsSize);
    int* stk   = malloc(sizeof(int) * numsSize);
    int* stk1  = malloc(sizeof(int) * numsSize);
    int* tmp   = malloc(sizeof(int) * numsSize);
    int top = -1, top1 = -1, ttmp = -1;

    for (int i = 0; i < numsSize; i++) ans[i] = -1;

    for (int i = 0; i < numsSize; i++) {
        int x = nums[i];
        while (top1 >= 0 && nums[stk1[top1]] < x) {
            ans[stk1[top1--]] = x;
        }
        while (top >= 0 && nums[stk[top]] < x) {
            tmp[++ttmp] = stk[top--];
        }
        while (ttmp >= 0) {
            stk1[++top1] = tmp[ttmp--];
        }

        stk[++top] = i;
    }

    *returnSize = numsSize;
    return ans;
}
