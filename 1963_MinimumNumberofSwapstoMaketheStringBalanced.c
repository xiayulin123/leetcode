int minSwaps(char* s) {
    int swap = 0;
    int min = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '['){
            swap++;
        } else {
            swap--;
            min = fmin(min, swap);
        }
    }
    return (-min+1)/2;
}
