long long addedBefore(int* time, int size, long long t){
    long long total = 0;
    for(int i = 0; i < size; i++){
        total += t / time[i];
    }
    return total;
}

int findMax(int* time, int size) {
    int max = time[0];
    for (int i = 1; i < size; i++) {
        if (time[i] > max) max = time[i];
    }
    return max;
}

long long minimumTime(int* time, int timeSize, int totalTrips) {
    long long left = 1;
    long long right = (long long)findMax(time, timeSize) * totalTrips;
    long long ans = right;

    while(left <= right){
        long long mid = left + (right - left) / 2;
        if(addedBefore(time, timeSize, mid) >= totalTrips){
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}
