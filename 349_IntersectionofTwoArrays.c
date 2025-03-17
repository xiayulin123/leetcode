/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void append(int **array, int *size, int value) {
    *array = realloc(*array, (*size + 1) * sizeof(int));
    (*array)[*size] = value;
    (*size)++;
}
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int index = 0;
    int *ans;
    for(int i = 0; i < nums1Size; i++){
        for(int j = 0; j < nums2Size; j++){
            if(nums1[i] == nums2[j]){
                int found = 0;
                for(int k = 0; k < index; k++){
                    
                    if(ans[k] == nums2[j]){
                        found = 1;
                        break;
                    }
                }
                if(!found){
                    append(&ans, &index, nums2[j]);
                }
            }
        }
    }
    *returnSize = index;
    return ans;
}
