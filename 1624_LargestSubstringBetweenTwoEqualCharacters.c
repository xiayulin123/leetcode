int maxLengthBetweenEqualCharacters(char* s) {
    int left1 = 0;
    int count[26] = {0};
    int ans = -1;
    int left = 0;

    for(int right = 0; s[right]; right++){

        count[s[right] - 'a']++;
        if(count[s[right] - 'a'] >= 2){
            while(s[left] != s[right]){
                left++;
            }

            ans = fmax(ans, right - left + 1);
            count[s[right] - 'a']--;

        }
        left = 0;
    }
    return ans == -1 ? -1 : ans-2 ;
}
