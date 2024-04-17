func fib(n int) int {
    if n == 0 {
        return 0
    }
    if n == 1 {
        return 1
    }
    return fib(n-1) + fib(n-2)

}

func fib(n int) int {
    if n == 0 {
        return 0
    }
    if n == 1 {
        return 1
    }
    ans := 0
    a := 1
    p1 := 1
    p2 := 0
    var dig func(a int)
    dig = func(a int) {
        if a == n {
            return 
        } else {
            ans = p1 + p2
            p2 = p1
            p1 = ans
            dig(a + 1)
        }
    }
    dig(a)
    return ans

}
