int nonSpecialCount(int l, int r) {
    int n = (int)sqrt(r);
    int v[n + 1];
    int ans = r - l + 1;
    for(int i = 0; i <= n; i++){
        v[i] = 0;
    }
    for(int i = 2; i <= n; i++){
        if(v[i] == 0){
            if (i * i >= l && i * i <= r) {
                ans--;
            }
            for(int j = i * 2; j <= n; j+= i){
            v[j] = 1;
        }
        }
        
    }
    return ans;
}
