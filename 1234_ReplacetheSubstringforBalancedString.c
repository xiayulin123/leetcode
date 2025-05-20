int balancedString(char* s) {
    int arr[4] = {0};
    int ans = strlen(s);
    int left = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'Q') arr[0]++;
        if(s[i] == 'W') arr[1]++;
        if(s[i] == 'E') arr[2]++;
        if(s[i] == 'R') arr[3]++;
    }
    int n =  strlen(s) /4;
    
    if(arr[0] == n && arr[1] == n && arr[2] == n && arr[3] == n) return 0;

    for(int right = 0; right < strlen(s); right++){
        if(s[right] == 'Q') arr[0]--;
        if(s[right] == 'W') arr[1]--;
        if(s[right] == 'E') arr[2]--;
        if(s[right] == 'R') arr[3]--;

        while(arr[0] <= n && arr[1] <= n && arr[2] <= n && arr[3] <= n){
            ans = fmin(ans, right - left + 1);

            if(s[left] == 'Q') arr[0]++;
            if(s[left] == 'W') arr[1]++;
            if(s[left] == 'E') arr[2]++;
            if(s[left] == 'R') arr[3]++;
            left++;
        }
    }
    return ans;
    

    return ans;
}
