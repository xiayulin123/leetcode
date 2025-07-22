int compare(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}
bool check(int* arr2, int arr1Val, int arr2Size, int d){
    int left = 0;
    int right = arr2Size - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        int diff = abs(arr2[mid] - arr1Val);
        if (diff <= d) return false;
        if (arr2[mid] < arr1Val) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return true;
}
int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d) {
    int ans = 0;
    qsort(arr2, arr2Size, sizeof(int), compare);
    for(int i = 0; i < arr1Size; i++){
        if(check(arr2, arr1[i], arr2Size, d)){
            ans++;
        }
    }
    return ans;

}
