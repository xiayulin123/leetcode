int countKConstraintSubstrings(char* s, int k) {
    int left = 0;
    int count[2] = {0};
    int ans = 0;
    for(int right = 0; s[right]; right++){
        count[s[right] - '0']++;
        while(count[0] > k && count[1] > k){
            count[s[left] - '0']--;
            left++;
        }
        ans += right - left + 1;
    }
    return ans;
}
