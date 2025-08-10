long long maximumSumOfHeights(int* maxHeights, int maxHeightsSize) {
    long long ans = 0;
    int* st = calloc(maxHeightsSize, sizeof(int));
    long long* sum = calloc(maxHeightsSize + 1, sizeof(long long));
    int top = -1;
    long long pre = 0;
    sum[0] = 0; 
    for (int i = 0; i < maxHeightsSize; i++) {
        while (top >= 0 && maxHeights[i] <= maxHeights[st[top]]) {
            int tmp = st[top];
            int left = (top >= 1) ? st[top - 1] : -1;
            top--;
            ans -= 1LL * maxHeights[tmp] * (tmp - left);
        }
        int L = (top >= 0) ? st[top] : -1;
        ans += 1LL * maxHeights[i] * (i - L);  
        sum[i + 1] = ans;
        st[++top] = i;
    }
    top = -1;
    for (int i = maxHeightsSize - 1; i >= 0; i--) {
        int x = maxHeights[i];
        while (top >= 0 && x <= maxHeights[st[top]]) {
            int j = st[top];
            int right = (top >= 1) ? st[top - 1] : maxHeightsSize;
            top--;
            pre -= 1LL * maxHeights[j] * (right - j);
        }
        if (top >= 0) {
            pre += 1LL * x * (st[top] - i);
        } else {
            pre += 1LL * x * (maxHeightsSize - i);
        }
         long long cand = pre + sum[i + 1] - maxHeights[i];
        if (cand > ans) ans = cand;
        st[++top] = i;
    }
    return ans;

}
