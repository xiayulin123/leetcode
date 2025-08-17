int totalSteps(int* nums, int numsSize) {
    int ans = 0;
    int* stk = calloc(numsSize, sizeof(int));
    int* cnt = calloc(numsSize, sizeof(int));
    int top = -1;
    for(int i = 0; i < numsSize; i++){
        int tmp = nums[i];
        int t = 0;
        while(top >= 0 && stk[top] <= tmp){
            if(cnt[top] > t) t = cnt[top];
            top--;
        }

        if(top < 0){
            stk[++top] = tmp;
            cnt[top] = 0;
        } else {
            stk[++top] = tmp;
            cnt[top] = t + 1;
            if (cnt[top] > ans) ans = cnt[top];
        }
    }
    return ans;
}
