/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int* successfulPairs(int* spells, int spellsSize, int* potions, int potionsSize, long long success, int* returnSize) {
    int* ans = malloc(spellsSize * sizeof(int));
    for (int i = 0; i < spellsSize; i++) {
        ans[i] = 0;
    }
    qsort(potions, potionsSize, sizeof(int), compare);
    *returnSize = spellsSize;
    
    for (int i = 0; i < spellsSize; i++) {
        long long target = (success - 1) / spells[i];
        if (target < potions[potionsSize - 1]) {
            int left = -1, right = potionsSize;
            while (left + 1 < right) {
                int mid = left + (right - left) / 2;
                if (potions[mid] > target) {
                    right = mid;
                } else {
                    left = mid;
                }
            }
            ans[i] = potionsSize - right;
        } else {
            ans[i] = 0;
        }
    }
    return ans;
}
