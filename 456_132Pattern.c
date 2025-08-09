bool find132pattern(int* nums, int numsSize) {
    int* st = calloc(numsSize, sizeof(int));
    int max = INT_MIN;
    int top = -1;
    for(int i = numsSize-1; i >= 0; i--){
        if(top >= 0){   
            if(nums[i] < max) return true;
        }
        while(top >= 0 && nums[i] > st[top]){
            max = st[top];
            top--;
        }
        st[++top] = nums[i];

    }
    return false;
}
