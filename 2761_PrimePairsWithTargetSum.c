/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
bool isPrime(int a){
    if(a==1){
        return false;
    }
    int tmp = 2;
    while(tmp * tmp <= a){
        if(a % tmp == 0){
            return false;
        }
        tmp++;
    }
    return true;
}
void generatePrimes(bool* isPrime, int* primes, int* primeCount, int n) {
    memset(isPrime, true, sizeof(bool) * (n + 1));
    isPrime[0] = isPrime[1] = false;
    *primeCount = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes[(*primeCount)++] = i;
            for (int j = i * 2; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int** findPrimePairs(int n, int* returnSize, int** returnColumnSizes) {
    bool* isPrime = (bool*)malloc(sizeof(bool) * (n + 1));
    int* primeList = (int*)malloc(sizeof(int) * (n + 1));
    int primeCount = 0;
    
    generatePrimes(isPrime, primeList, &primeCount, n);

    int** ans = (int**)malloc(sizeof(int*) * (primeCount));
    *returnColumnSizes = (int*)malloc(sizeof(int) * (primeCount));
    *returnSize = 0;

    for (int i = 0; i < primeCount && primeList[i] <= n / 2; i++) {
        int a = primeList[i];
        int b = n - a;
        if (isPrime[b]) {
            ans[*returnSize] = (int*)malloc(sizeof(int) * 2);
            ans[*returnSize][0] = a;
            ans[*returnSize][1] = b;
            (*returnColumnSizes)[*returnSize] = 2;
            (*returnSize)++;
        }
    }

    free(isPrime);
    free(primeList);
    return ans;
}
