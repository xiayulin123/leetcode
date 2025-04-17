bool isThree(int n) {
    int ans = 0;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            if (i != n / i){
                    ans += 2;
                }
                else{
                    ans += 1;
                }


        }
    }
    return ans == 3;
}
