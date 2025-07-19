bool check(long long m, int* ranks, int ranksSize, int cars){
    long long count = 0;
    for(int i = 0; i < ranksSize; i++){
        count += sqrt(m / ranks[i]);
    }
    return count >= cars;
}
long long repairCars(int* ranks, int ranksSize, int cars) {
    long long ans = 0;
    long long left = 1;
    long long right = 1LL * ranks[0] * cars * cars;
    while(left < right){
        long long mid = left + right >> 1;
        if(check(mid, ranks, ranksSize, cars)){
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return right;
}
