int equalSubstring(char* s, char* t, int maxCost) {
    int ans = 0;
    int l = 0;
    int r = 0;
    int length = 0;
    while(s[r] != '\0'){
        length += abs(s[r] - t[r]);
        while (length > maxCost) {
            length -= abs(s[l] - t[l]);
            l++;
        }
        ans = fmax(ans, r - l + 1);

        r++;
        
    }
    return ans;
}
