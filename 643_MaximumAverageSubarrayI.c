#define Max(a,b) ((b) > (a) ? (b) : (a))

double findMaxAverage(int* nums, int numsSize, int k) {
    double ans, tmp = 0;
    for(int i = 0; i < numsSize; i++){
        tmp += nums[i];
        if(i < k - 1){
            continue;
        }
        ans = Max(ans, tmp);
        tmp -= nums[i-k+1];
    }
    return ans/k;
}
