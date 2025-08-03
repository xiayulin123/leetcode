bool check(int* position, int positionSize, int m, int val){
    int cnt = 1;
    int min = position[0];
    for(int i = 1; i < positionSize; i++){
        if(position[i] - val >= min){
            cnt++;
            min = position[i];
        }
    }
    return cnt >= m;
}

int cmp(const void* a, const void* b){
    return *(int *)a - *(int *)b;
}
int maxDistance(int* position, int positionSize, int m) {
    int right = 0;
    int left = 0;
    for(int i = 0; i < positionSize; i++){
        if(position[i] > right){
            right = position[i];
        }
    }
    qsort(position, positionSize, sizeof(int), cmp);

    while(left + 1 < right){
        int mid = left + (right - left) / 2;
        if(check(position, positionSize, m, mid)){
            left = mid;
        } else {
            right = mid;
        }
    }
    return left;
}
