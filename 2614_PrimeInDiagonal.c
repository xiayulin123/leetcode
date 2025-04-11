bool prime(int a){
    if(a==1) return false;
    int tmp = 2;
    while(tmp * tmp <= a){
        if (a % tmp == 0) {
            return false;
        }
        tmp++;
    }
    return true;
}


int diagonalPrime(int** nums, int numsSize, int* numsColSize) {
    int ans = 0;
    for(int i = 0; i < numsSize; i++){
        if(prime(nums[i][i])){
            ans = ans > nums[i][i] ? ans : nums[i][i];
        }
        if(prime(nums[i][numsSize-i-1])){
            ans = ans > nums[i][numsSize-i-1] ? ans : nums[i][numsSize-i-1];
        }
    }
    return ans;
}
