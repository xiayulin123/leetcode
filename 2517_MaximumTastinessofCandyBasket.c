int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

bool check(int* price, int priceSize, int k, int val){
    int cnt = 1;
    int tmp = price[0];
    for(int i = 1; i < priceSize; i++){
        if(price[i] >= tmp + val){
            cnt++;
            tmp = price[i];
        }
    }
    return cnt >= k;
}

int maximumTastiness(int* price, int priceSize, int k) {
    int right = 0;
    int left = 0;
    qsort(price, priceSize, sizeof(int), cmp);
    for(int i = 0; i < priceSize; i++){
        if(price[i] > right){
            right = price[i];
        }
    }
    while(left + 1 < right){
        int mid = left + (right - left) / 2;
        if(check(price, priceSize, k, mid)){
            left = mid;
        } else {
            right = mid;
        }
    }
    return left;
}
