func isPowerOfTwo(n int) bool {
    if n == 1{
        return true
    }
    if n <= 0 {
        return false
    }
    
    for n > 3 {
        if n%2 != 0 {
        return false
        }
        n /= 2
    }
    return n%2 == 0
}
