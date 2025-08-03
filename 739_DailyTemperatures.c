/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize) {
    int* ans = calloc(temperaturesSize, sizeof(int));
    *returnSize = temperaturesSize;
    int* st = malloc(temperaturesSize * sizeof(int));
    int top = -1;
    for(int i = 0; i < temperaturesSize; i++){
        int tmp = temperatures[i];
        while(top >= 0 && temperatures[st[top]] < tmp){
            int t = st[top--];
            ans[t] = i - t;
        }
        st[++top] = i;
    }
    return ans;
}
