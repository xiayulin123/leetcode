#define Max(a,b) ((a) > (b) ? (a) : (b))
int maxScore(int* cardPoints, int cardPointsSize, int k) {
    int ans = cardPoints[0];
    int totalPoints = 0;
    int n = cardPointsSize;
    int tmp = 0;
    
    for(int i = 0; i < cardPointsSize; i++){
        totalPoints += cardPoints[i];
    }
    if(cardPointsSize == k){
        return totalPoints;
    }
    for(int i = 0; i < cardPointsSize ; i++){
        tmp += cardPoints[i];
        if(i >= cardPointsSize - k - 1){
            ans = Max(ans, totalPoints - tmp);
            if(i < cardPointsSize - 1) {
                tmp -= cardPoints[i-cardPointsSize+k+1];

            }
        }
        
    }
    return ans;
}
