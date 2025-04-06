int maximumLengthSubstring(char* s) {
    int ans = 0;
    int l = 0;
    int r = 0;
    int n = strlen(s);
    int tmp[26];
    memset(tmp, 0, 26 * sizeof(int));
    while(r < n){
        tmp[s[r]-'a']++;
        if(tmp[s[r]-'a'] > 2){
            while(tmp[s[r]-'a'] > 2){
                tmp[s[l]-'a']--;
                l++;
            }
        }
        ans = fmax(ans, r - l + 1);
        r++;


    }
    return ans;
    
    
}
