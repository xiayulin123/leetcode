int findGCD(int* nums, int numsSize) {
    int smallest = 0x7ffffff;
    int largest = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }
    int ans = smallest;
    while(ans > 1){
        if(ans == 1) return 1;
        if(largest % ans == 0 && smallest % ans == 0){
            return ans;
        } else {
            ans--;
        }
    }
    return ans;
}
