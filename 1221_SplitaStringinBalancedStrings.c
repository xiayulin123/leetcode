int balancedStringSplit(char* s) {
    int ans = 0;
    int add = 0;
    int tmp = 0;
    for(int i = 0; s[i] !='\0'; i++){
        if(s[i] == s[tmp] && add != 0){
            add++;
        } else if( add >= 1){
            add--;
        } else{
            tmp = i;
            add++;
            ans++;
        }
    }
    return ans;
}
