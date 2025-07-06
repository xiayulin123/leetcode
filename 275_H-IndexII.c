int hIndex(int* citations, int citationsSize) {
    int left = 0;
    int right = citationsSize + 1;
    while(left + 1 < right){
        int mid = (left + right) / 2;
        if(citations[citationsSize - mid] >= mid){
            left = mid;
        } else {
            right = mid;
        }
    }
    return left;
}
