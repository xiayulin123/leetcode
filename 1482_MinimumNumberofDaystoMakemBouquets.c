bool check(int time, int* bloomDay, int bloomDaySize, int m, int k){
    int count = 0;
    int tmp = 0;
    for(int i = 0; i < bloomDaySize; i++){
        int ok = time / bloomDay[i];
        if(!ok){
            tmp = 0;
        } else {
            tmp += 1;
        }
        if(tmp == k){
            count++;
            tmp = 0;
        }
    }
    return count >= m;
}
int minDays(int* bloomDay, int bloomDaySize, int m, int k) {
    if(1LL * m*k > bloomDaySize) return -1;
    int right = 0;
    int left = 1;
    for(int i = 0; i < bloomDaySize; i++){
        if(bloomDay[i] > right){
            right = bloomDay[i];
        }
    }
    if(m*k == bloomDaySize) return right;

    while(left < right){
        int mid = left + ((right - left) >> 1);
        if(check(mid, bloomDay, bloomDaySize, m, k)){
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return right;
}
