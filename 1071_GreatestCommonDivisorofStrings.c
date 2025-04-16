int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
char* gcdOfStrings(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int minLength = (len1 < len2) ? len1 : len2;
    
    for (int i = 0; i < (len1 + len2); i++) {
        if (str1[i % len1] != str2[i % len2]) {
            return ""; 
        }
    }
    
    int candidateLen = gcd(len1, len2);
    char* result = malloc(candidateLen + 1);  
    strncpy(result, str1, candidateLen);
    result[candidateLen] = '\0';
    
    return result;

}
