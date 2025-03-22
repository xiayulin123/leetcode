/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rowAndMaximumOnes(int** mat, int matSize, int* matColSize, int* returnSize) {
    int* ans = (int*)malloc(2 * sizeof(int));
    int row = 0;
    int count = 0;
    for(int i = 0; i < matSize; i++){
        int tmp = 0;
        for(int j = 0; j < matColSize[i]; j++){
            if(mat[i][j] == 1){
                tmp++;
            }
        }
        if(tmp > count){
            row = i;
            count = tmp;
        }
    }
    ans[0] = row;
    ans[1] = count;
    *returnSize = 2;
    return ans;
}
