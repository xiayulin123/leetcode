func isPerfectSquare(num int) bool {
    i:=0
    for ; i * i <= num; i+=2{
        if i * i == num {
            return true
        }
    }
    return (i-1)*(i-1) == num
}


func isPerfectSquare(num int) bool {
    
    for left, right := 0, num; left <= right; {
        mid := (left + right) / 2
        if mid * mid == num {
            return true
        }
        if mid * mid < num {
            left = mid + 1
        } else {
            right = mid - 1
        }

    }
    return false
}
