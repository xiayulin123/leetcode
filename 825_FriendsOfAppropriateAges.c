int numFriendRequests(int* ages, int agesSize) {
    int count[121] = {0};
    int added[121] = {0};
    int ans = 0;

    for(int i = 0; i < agesSize; i++){
        count[ages[i]]++;

    }
    for(int i = 1; i < 121; i++){
        added[i] = added[i-1] + count[i];
    }

    for(int i = 15; i < 121; i++){
        if(count[i]){
            int tmp = i * 0.5 + 8;

            ans += count[i] * (added[i] - added[tmp - 1] - 1);
        }

    }
    return ans;
}
