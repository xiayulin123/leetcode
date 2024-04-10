func repeatedSubstringPattern(s string) bool {
    n := len(s)
    
    for i := 1; i <= n/2; i++ {
        if n % i == 0 {
            try := true
            for j := i; j < n ; j ++ {
                if s[j] != s[j-i] {
                    try = false;
                    break
                }

                
            }
            if try {
                    return true
                }
        }
    }
    return false
}
