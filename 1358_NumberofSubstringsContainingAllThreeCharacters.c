int numberOfSubstrings(char* s) {
    int ans = 0;
    int left = 0;
    int count[3] = {};
    for(int right = 0; s[right]; right++){
        count[s[right]-'a']++;
        while(count[0] > 0 && count[1] > 0 && count[2] > 0){
            count[s[left]-'a']--;
            left++;
        }
        ans+= left;
    }
    return ans;
}
