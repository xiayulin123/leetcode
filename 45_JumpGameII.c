int jump(int* nums, int numsSize) {
    int max = 0;
    int jump = 1;
    int edge = 0;
    if(numsSize == 0 || numsSize == 1){
        return 0;
    }
    for(int i = 0; i < numsSize; i++){
        if(i + nums[i] > max){
            max = i + nums[i];
        }
        if(max >= numsSize - 1){
            return jump;
        }
        if(i == edge){
            edge = max;
            jump++;
        }
        if(edge >= numsSize-1){
            return jump;
        }
    }
    return jump;
}
