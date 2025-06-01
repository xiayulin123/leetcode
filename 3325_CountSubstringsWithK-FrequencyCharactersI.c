int numberOfSubstrings(char* s, int k) {
    int left = 0;
    int count[26] = {};
    int ans = 0;
    for(int right = 0; s[right]; right++){
        count[s[right] - 'a']++;
        while(count[s[right]-'a'] >= k){
            count[s[left] - 'a']--;
            left++;

        }
        ans+=left;

    }
    return ans;
}
