/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* canSeePersonsCount(int* heights, int heightsSize, int* returnSize) {
    int* st = calloc(heightsSize, sizeof(int));
    int* ans = calloc(heightsSize, sizeof(int));
    int top = -1;
    for(int i = heightsSize - 1; i >= 0; i--){
        while(top >= 0 && st[top] < heights[i]){
            ans[i]++;
            top--;
        }
        if(top >= 0){
            ans[i]++;
        }
        st[++top] = heights[i];
    }
    *returnSize = heightsSize;
    return ans;
}
