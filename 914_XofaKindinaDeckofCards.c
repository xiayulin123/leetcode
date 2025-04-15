int gcd(int a, int b){
    while(b !=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
bool hasGroupsSizeX(int* deck, int deckSize) {
    if(deckSize == 0){
        return false;
    }
    int array[10000] = {0};
    for(int i = 0; i < deckSize; i++){
        array[deck[i]]++;
    }
    int ans = array[0];

    for(int i = 1; i < 10; i++){
        ans = gcd(ans, array[i]);
        if(ans == 1){return false;}
    }
    return true;
}
