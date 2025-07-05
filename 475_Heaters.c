int compare(const void* a, const void* b){
    return (*(int*)a) - (*(int*)b);
}
int binary(int* arr, int size, int target){
    int left = 0;
    int right = size - 1;
    if(arr[left] > target){
        return -1;
    }
    while(left < right){
        int mid = (right - left + 1) / 2 + left;
        if(arr[mid] <= target){
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    return left;
}
int findRadius(int* houses, int housesSize, int* heaters, int heatersSize) {
    int ans = 0;
    qsort(heaters, heatersSize, sizeof(int), compare);
    for(int i = 0; i < housesSize; i++){
        int left = binary(heaters, heatersSize, houses[i]);
        printf("HERE OS LEFT %d", left);
        int right = left + 1;
        int leftDistance = left < 0 ? INT_MAX : houses[i] - heaters[left];
        int rightDistance = right >= heatersSize ? INT_MAX : heaters[right] - houses[i];
        int tmp = fmin(leftDistance, rightDistance);
        ans = fmax(ans, tmp);
    }
    return ans;
}
