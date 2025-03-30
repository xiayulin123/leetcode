/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getAverages(int* nums, int numsSize, int k, int* returnSize) {
    int *ans = malloc(numsSize * sizeof(int));
    // int *ans = calloc(numsSize, sizeof(int));
    long tmp = 0;
    for(int i = 0; i < numsSize; i++){
        
        if(i < k){
            tmp += nums[i];
            ans[i] = -1;
            continue;
        }
        if(i + k >= numsSize){
            ans[i] = -1;
            continue;
        }


        if(i == k){
            for(int j = i; j <= i + k; j++){
                tmp += nums[j];
            }
        } else {
            tmp += nums[i+k];
        }
        

        ans[i] = tmp / (k*2 + 1);
        tmp -= nums[i-k];

        
        
    }
    *returnSize = numsSize;
    return ans;
}
