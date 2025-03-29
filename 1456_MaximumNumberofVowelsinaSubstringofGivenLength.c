#define Max(a, b) ((b) > (a) ? (b) : (a))
int maxVowels(char* s, int k) {
    char leaving;
    int ans = 0;
    int tmp = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            tmp++;
        }
        if(i < k- 1){
            continue;
        }
        ans = Max(tmp, ans);
        leaving = s[i-k+1];
        if(leaving == 'a' || leaving == 'e' || leaving == 'i' || leaving == 'o' || leaving == 'u'){
            tmp--;
        }
    }
    return ans;
    
}
