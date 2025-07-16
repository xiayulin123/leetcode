int findKthPositive(int* arr, int arrSize, int k) {
    int left = 0;
    int right = arrSize - 1;
    if(arr[right] - right - 1 >= k){
        int rest = k;
        int mid = left + (right - left) / 2;
        while(left <= right){
            mid = left + (right - left) / 2;
            if(arr[mid] - mid <= k){
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return arr[left] + k - (arr[left] - left);
    } else {
        return arr[right] + 1 + k - (arr[right] - right);
    }
    
}
