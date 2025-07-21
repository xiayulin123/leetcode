char* makeFancyString(char* s) {
    int index = 0;
    char* ans = malloc(strlen(s) + 1);
    for(int i = 0; s[i]; i++){
        if(index >= 2 && ans[index - 1] == s[i] && ans[index - 2] == s[i]){
            continue;
        }
        ans[index] = s[i];
        index++;
    }
    ans[index] = '\0';
    return ans;
}
