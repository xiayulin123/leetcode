func isUgly(n int) bool {
    if n == 0 {
        return false
    }
    if n == 1 || n == 2 || n == 5 || n == 3 {
        return true
    }
    for n % 2 == 0 {
        n /= 2
    } 
    for n % 3 == 0 {
        n /= 3
    }
    for n % 5 == 0 {
        n /= 5
    }

    return n == 1
}


func isUgly(n int) bool {
    if n == 0 {
        return false
    }
    var factors = []int{2, 3, 5}
    for _, v := range factors {
        for n % v == 0 {
            n /= v
        }
    }

    return n == 1
}
