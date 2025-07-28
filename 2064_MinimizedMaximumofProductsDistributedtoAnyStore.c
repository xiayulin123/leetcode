int minimizedMaximum(int n, int* quantities, int quantitiesSize) {
    int max = 0;
    for(int i = 0; i < quantitiesSize; i++){
        if(quantities[i] > max){
            max = quantities[i];
        }
    }
    int min = 0;
    while(min + 1 < max){
        int mid = min + (max - min) / 2;
        int check = 0;
        int tmp = 0;
        for(int i = 0; i < quantitiesSize; i++){
            tmp += (quantities[i] + mid - 1 ) / mid;
        }
        if(tmp <= n) check = 1;
        if(check) {
            max = mid;
        } else {
            min = mid;
        }
    }
    return max;
}
