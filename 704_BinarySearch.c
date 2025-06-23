int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(nums[mid] < target){
            left = mid + 1;
        } else if(nums[mid] > target){
            right = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}


int try(int* nums, int left, int right, int target){
    if(left > right){
        return -1;
    }
    int mid = left + (right - left) / 2;
    if(nums[mid] > target){
        return try(nums, left, mid - 1, target);
    } else if(nums[mid] < target){
        return try(nums, mid + 1, right, target);
    } else {
        return mid;
    }
    return -1;

}
int search(int* nums, int numsSize, int target) {
    // int left = 0;
    // int right = numsSize - 1;
    // while(left <= right){
    //     int mid = left + (right - left) / 2;
    //     if(nums[mid] < target){
    //         left = mid + 1;
    //     } else if(nums[mid] > target){
    //         right = mid - 1;
    //     } else {
    //         return mid;
    //     }
    // }
    // return -1;
    return try(nums, 0, numsSize - 1, target);
}
