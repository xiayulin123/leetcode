/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int divideBy2(int* array, int size, int target, bool isLeft){
    int left = 0;
    int right = size -1;
    int anss = size;
    while(left <= right){
        int mid = (left + right) / 2;
        if((array[mid] > target) || (array[mid] >= target && isLeft)){
            right = mid - 1;
            anss = mid;
        } else {
            left = mid + 1;
        }
    }
    return anss;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int left = divideBy2(nums, numsSize, target, true);
    int right = divideBy2(nums, numsSize, target, false) - 1;
    *returnSize = 2;
    int* ans = (int*)malloc(sizeof(int) * 2);

    if(left <= right && right < numsSize && nums[left] == target && nums[right] == target){
        ans[0] = left;
        ans[1] = right;
        return ans;
    }
    ans[0] = -1;
    ans[1] = -1;
    return ans;


}
