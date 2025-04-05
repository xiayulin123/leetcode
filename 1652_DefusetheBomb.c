/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decrypt(int* code, int codeSize, int k, int* returnSize) {
    int* ans = malloc(codeSize * (sizeof(int)));
    memset(ans, 0, sizeof(int) * codeSize);
    int tmp = 0;
    int pointer = 0;
    if(k == 0){
        for(int i = 0; i < codeSize; i++){
            ans[i] = 0;
        }
    } else if( k < 0){
        for (int i = 1; i <= -k; i++) {
            tmp += code[(codeSize - i) % codeSize];
        }
        for (int i = 0; i < codeSize; i++) {
            ans[i] = tmp;
            tmp += code[i] - code[(codeSize + k + i) % codeSize];
        }

    } else {
        for(int i = 0; i <= k; i++){
            
            tmp += code[pointer];
            pointer++;
            if(pointer >= codeSize){
                pointer = pointer % codeSize;
            }

        }
        for(int i = 0; i < codeSize; i++){
            tmp -= code[i];
            ans[i] = tmp;
            
            tmp += code[pointer];
            pointer += 1;
            if(pointer >= codeSize){
                pointer = pointer % codeSize;
            }

        }
    }
    *returnSize = codeSize;
    return ans;
    
}
