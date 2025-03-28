int minimizedStringLength(char* s) {
    int ans = 0;
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        count |= 1 << (s[i] - 'a');
    }
    for(unsigned int i = 0; i < 32; i++){
        if((1U << i) & count){
            ans++;
        }
    }
    return ans;
}
