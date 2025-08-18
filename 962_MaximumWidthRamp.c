int maxWidthRamp(int* nums, int numsSize) {
    int ans = 0;
    int* stk = malloc(numsSize * sizeof(int));
    int top = -1;
    stk[++top] = 0;
    for(int i = 1; i < numsSize; i++){
        if(nums[i] < nums[stk[top]]){
            stk[++top] = i;
        }
    }
    for(int i = numsSize - 1; i >= ans; i--){
        while(top >= 0 && nums[i] >= nums[stk[top]]){
            ans = fmax(ans, i - stk[top]);
            top--;
        }
    }
    return ans;
}
