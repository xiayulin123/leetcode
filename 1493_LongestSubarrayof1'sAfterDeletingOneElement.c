int longestSubarray(int* nums, int numsSize) {
    int ans = 0;
    int tmp = 0;
    int last = 0;
    int never = 0;
    for(int i = 0; i < numsSize; i++){
        if(!nums[i]){
            ans = fmax(ans, tmp + last);
            last = tmp;
            tmp = 0;
            never = 1;
        } else {
            tmp++;
        }
    }
    ans = fmax(ans, tmp + last);

    return never ? ans : numsSize - 1;
}
