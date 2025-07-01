int shipWithinDays(int* weights, int weightsSize, int days) {
    int left = 0;
    int right = 0;
    for(int i = 0; i < weightsSize; i ++){
        if(weights[i] > left){
            left = weights[i];
        }
        right += weights[i];
    }

    while(left < right){
        int mid = (left + right) / 2;
        int day = 1;
        int current = 0;
        for(int j = 0; j < weightsSize; j++){
            if(current + weights[j] > mid){
                day++;
                current = 0;
            }
            current += weights[j];
        }
        if(day <= days){
            right = mid ;

        } else {
            left = mid + 1;
        }
    }
    return left;
}
