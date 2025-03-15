bool isBalanced(char* num) {
    int ans = 0;
    for(int i = 0; num[i] != '\0'; i++){
        ans = i % 2 == 0 ? ans + num[i] - '0' : ans - num[i] + '0';
    } 
    return ans == 0;
}
