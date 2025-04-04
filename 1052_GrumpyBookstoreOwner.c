#define Max(a,b) ((a) > (b) ? (a) : (b))
int maxSatisfied(int* customers, int customersSize, int* grumpy, int grumpySize, int minutes) {
    int ans = 0;
    int base = 0;
    int anger = 0;
    for(int i = 0; i < customersSize; i++){
        if(grumpy[i] != 1){
            base += customers[i];
        }
    }

    for(int i = 0; i < customersSize; i++){
        if(i < minutes - 1){
            if(grumpy[i] == 1){
                anger += customers[i];
            }
            continue;
        }
        if(grumpy[i] == 1){
                anger += customers[i];
        }
        ans = Max(ans, anger);

        if(grumpy[i-minutes+1] == 1){
            anger -= customers[i-minutes+1];
        }
        
        
    }
    ans += base;
    return ans;
}
