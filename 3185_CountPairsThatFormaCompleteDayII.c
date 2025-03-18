long long countCompleteDayPairs(int* hours, int hoursSize) {
    int day = 24;
    long long ans = 0;
    long long* tmp = malloc(24 * sizeof(long long));
    memset(tmp, 0, 24 * sizeof(long long));
    for(int i = 0; i < hoursSize ; i++){
        tmp[hours[i] % 24]++;

    }
    for(int i = 1; i < 12; i++){
        ans += tmp[i] * tmp[24-i];
    }
    ans += tmp[12] * (tmp[12] - 1) / 2;
    ans += tmp[0] * (tmp[0] - 1) / 2;
    return ans;
}
