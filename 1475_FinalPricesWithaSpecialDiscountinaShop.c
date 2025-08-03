/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    *returnSize = pricesSize;
    int* ans = calloc(pricesSize, sizeof(int));
    int* st = malloc(pricesSize * sizeof(int));
    int top = -1;
    int left = 0;
    for(int i = 0; i < pricesSize; i++){
        left++;
        int tmp = prices[i];
        while(top >= 0 && tmp <= prices[st[top]]){
            int index = st[top--];
            ans[index] = prices[index] - tmp;
            left--;
        }
        st[++top] = i;
    }
    for(int i = 0; i < left; i++){
        ans[st[top]] = prices[st[top]];
        top--;
    }
    return ans;
}
