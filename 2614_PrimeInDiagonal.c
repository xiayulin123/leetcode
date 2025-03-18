int diagonalPrime(int** nums, int numsSize, int* numsColSize) {
    int index = 0;
    int index2 = numsSize - 1;
    int max = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i][index] > max){
            if( nums[i][index] == 2){
                max = nums[i][index];
            } else if(nums[i][index] % 2 == 0 || nums[i][index] <= 1){
                
            } else {
                int found = 0;
                for(int k = 3; k * k <= nums[i][index]; k += 2){
                    if(nums[i][index] % k == 0){
                        found = 1;;
                    }
                }
                if(!found){
                    max = nums[i][index];

                }

            }
        }
        if(nums[i][index2] > max){
            if( nums[i][index2] == 2){
                max = nums[i][index2];
            } else if(nums[i][index2] % 2 == 0 || nums[i][index2] <= 1){
                
            } else {
                int found = 0;
                for(int k = 3; k * k <= nums[i][index2]; k += 2){
                    if(nums[i][index2] % k == 0){
                        found = 1;
                    }
                }
                if(!found){
                    max = nums[i][index2];

                }
            }
        }
        index++;
        index2--;
    }
    return max;
}
