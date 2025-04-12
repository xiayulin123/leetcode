bool isPrime(int a){
    if(a == 1){
        return false;
    }
    int tmp = 2;
    while(tmp * tmp <= a){
        if(a % tmp == 0){
            return false;
        }
        tmp++;
    }
    return true;
}
int countPrimeSetBits(int left, int right) {
    int numberOf1 = 0;
    int ans = 0;
    for(int i = left; i <= right; i++){
        numberOf1 = 0;
        int tmp = i;
        while(tmp){
            tmp &= (tmp-1);
            numberOf1++;
        }
        if(isPrime(numberOf1)){
            ans++;
        }

    }
    return ans;
}
