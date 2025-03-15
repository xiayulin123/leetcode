int scoreOfString(char* s) {
    int ans = 0;
    int pre = s[0];
    for(int i = 1; s[i] != '\0'; i++){
        ans += s[i] - pre > 0 ? s[i] - pre : pre - s[i];
        pre = s[i];
    }
    return ans;
}
