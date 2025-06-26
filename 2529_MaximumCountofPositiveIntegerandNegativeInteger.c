int try(int* nums, int numsSize, int a){
    int left = 0;
    int right = numsSize - 1;
    while(left <= right){
        int mid = (left + right) >> 1;
        if(nums[mid] >= a){
            right = mid - 1;
        } else if(nums[mid] < a){
            left = mid + 1;
        }
    }
    return left;
}
int maximumCount(int* nums, int numsSize) {
    int op = try(nums, numsSize, 1);
    int ne = try(nums, numsSize, 0);
    return fmax(numsSize - op, ne);
}
