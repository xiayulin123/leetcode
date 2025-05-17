int maxConsecutiveAnswers(char* answerKey, int k) {
    int left = 0; 
    int ans = 0;
    int count[2] = {0};
    for(int right = 0; answerKey[right]; right++){
        count[answerKey[right] >> 1 & 1]++;
        if(count[0] > k && count[1] > k){
            count[answerKey[left++] >> 1 & 1]--;
        }
        ans = fmax(ans, right - left + 1);
    }
    return ans;
}
