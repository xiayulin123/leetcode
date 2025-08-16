int totalSteps(int* nums, int numsSize) {
    int ans = 0;
    int* stk = calloc(numsSize, sizeof(int));
    int top1 = -1;
    int top = -1;
    bool finished = false;
    int n = numsSize;
    int deleted = 0;
    while(!finished){
        finished = true;
        int x = 0;
        for(int i = 0; i < n; i++){
            stk[++top] = nums[i];
            if(x == 0){
                if(top >= 1 && nums[i] < stk[top-1]){
                    x = nums[i];
                    finished = false;
                    top--;
                    deleted++;
                }
            } else {
                if(top >= 1 && nums[i] < x){
                    x = nums[i];
                    top--;
                    deleted++;
                }
            }

            
        }
        ans++;
        
    }
    
}
