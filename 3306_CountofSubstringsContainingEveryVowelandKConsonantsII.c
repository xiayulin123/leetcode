long long countOfSubstrings(char* word, int k) {
    long long ans = 0;
    int count[26] = {0};
    int count1[26] = {0};
    int left = 0;
    int left1 = 0;
    int consonants = 0;
    int consonants1 = 0;

    for(int right = 0; word[right]; right++){
        count[word[right] - 'a']++;
        count1[word[right] - 'a']++;
        if(word[right] - 'a' != 0 && word[right] - 'a' != 4 && word[right] - 'a' != 14 && word[right] - 'a' != 20 && word[right] - 'a' != 8){
            consonants++;
            consonants1++;

        }
        while(count[0] > 0 && count[4] > 0 && count[8] > 0 && count[14] > 0 && count[20] > 0 && consonants >= k && left1 < right){
            if(word[left] - 'a' == 0 || word[left] - 'a' == 4 || word[left] - 'a' == 14 || word[left] - 'a' == 20 || word[left] - 'a' == 8){
                count[word[left] - 'a']--;
            } else {
                consonants--;
            }
            left++;

            
        }
        while(count1[0] > 0 && count1[4] > 0 && count1[8] > 0 && count1[14] > 0 && count1[20] > 0 && (consonants1 >= k+1) && left1 < right){
            if(word[left1] - 'a' == 0 || word[left1] - 'a' == 4 || word[left1] - 'a' == 14 || word[left1] - 'a' == 20 || word[left1] - 'a' == 8){
                count1[word[left1] - 'a']--;
            } else {
                consonants1--;
            }
            left1++;

            
        }
        ans += left - left1;
    }
    return ans;
}
