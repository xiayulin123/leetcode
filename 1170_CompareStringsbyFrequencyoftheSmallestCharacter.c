/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(char* array){
    char smallest = 'z';
    int frequency = 0;
    for(int j = 0; array[j]; j++){
        if(array[j] == smallest){
            frequency++;
        }
        if(array[j] < smallest){
            frequency = 1;
            smallest = array[j];
        }
    }
    return frequency;
}

int cmp(const void* a, const void* b){
    return (*(int *)a) - (*(int *)b);
}

int* numSmallerByFrequency(char** queries, int queriesSize, char** words, int wordsSize, int* returnSize) {
    *returnSize = queriesSize;
    int* ans = malloc((queriesSize) * sizeof(int));
    memset(ans, 0, (queriesSize) * sizeof(int));
    for(int i = 0; i < queriesSize; i++){
        ans[i] = compare(queries[i]);
    }
    int* word = malloc((wordsSize) * sizeof(int));
    memset(word, 0, (wordsSize) * sizeof(int));
    for(int i = 0; i < wordsSize; i++){
        word[i] = compare(words[i]);
    }
    qsort(word, wordsSize, sizeof(int), cmp);
    for(int i = 0; i < queriesSize; i++){
        int left = 0;
        int right = wordsSize - 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(word[mid] > ans[i]){
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        ans[i] = wordsSize - left;
    }
    return ans;
}
