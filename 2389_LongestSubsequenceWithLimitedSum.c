/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
static int cmp(const void *pa, const void *pb) {
    return *(int *)pa - *(int *)pb;
}

int* answerQueries(int* nums, int numsSize, int* queries, int queriesSize, int* returnSize) {
    qsort(nums, numsSize, sizeof(int), cmp);

    int* new = malloc((numsSize) * sizeof(int));
    memset(new, 0, (numsSize) * sizeof(int)); 

    for(int i = 0; i < numsSize; i++){
        if(i == 0){
            new[i] = nums[i];
        } else {
            new[i] = new[i-1] + nums[i];
        }
    }
    int* ans = malloc((queriesSize) * sizeof(int));
    memset(ans, 0, (queriesSize) * sizeof(int)); 
    *returnSize = queriesSize;
    for(int i = 0; i < queriesSize; i++){
        int left = 0;
        int right = numsSize - 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
           
            if(new[mid] <= queries[i]){
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        ans[i] = left;
    }
    return ans;
    
}
