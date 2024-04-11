func hammingDistance(x int, y int) (ans int) {
    for i := x ^ y; i > 0; i>>=1 {
        ans += i & 1;
    }   
    return 
}
