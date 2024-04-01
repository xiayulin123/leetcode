func isPowerOfThree(n int) bool {
    if n <= 0 {
        return false
    }
    if n == 1 {
        return true
    }
    for ;n >= 3; n/=3 {
        if n % 3 != 0 {
            return false
        }
        if n == 3 {
            return true
        }
    }
    return false  
}

func isPowerOfThree(n int) bool {
    for n > 0 && n % 3 == 0 {
        n /= 3
    }
    return n == 1  
}
