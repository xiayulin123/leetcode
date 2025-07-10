int peakIndexInMountainArray(int* arr, int arrSize) {
    int left = -1;
    int right = arrSize - 1;
    while(left + 1 < right){
        int mid = left + (right - left) / 2;
        if(arr[mid] < arr[mid + 1]){
            left = mid;
        } else {
            right = mid;
        }
    }
    return right;
}
