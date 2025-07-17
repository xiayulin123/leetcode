int hIndex(int* citations, int citationsSize) {
    int check[1001] = {0};
    for(int i = 0; i < citationsSize; i++){
        check[citations[i]]++;
    }
    int ans = 0;
    int count = citationsSize;
    for(int i = 0; i < 1001; i++){
        count -= check[i];
        if(count <= i){
            return i;
        } 
    }
    return ans;
}
