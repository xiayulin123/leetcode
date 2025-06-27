int smallestDivisor(int* nums, int numsSize, int threshold) {
    int left = 1;
    int right = 1000000;
    while(left < right){
        int mid = (right + left) / 2;
        int tmp = 0;
        for(int i = 0; i < numsSize; i++){
            tmp += (nums[i] + mid - 1) / mid;
        }
        if(tmp > threshold){
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;

    

}
