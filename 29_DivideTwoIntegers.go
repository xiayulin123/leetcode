func divide(dividend int, divisor int) int {
    if divisor == 0 {
        return 0 
    }
    if divisor == 1 {
        return dividend
    }
    if divisor == -1 {
        if dividend > math.MinInt32 {
            return -dividend
        }
        return math.MaxInt32
    }

    negative := (dividend < 0) != (divisor < 0)

    if dividend > 0{
        dividend *= -1
    }
    if divisor > 0 {
        divisor *= -1
    }
    candidate := []int{divisor}
    for x := divisor; x >= dividend - x; {
        x += x
        candidate = append(candidate, x)
    }
    ans := 0
    for i := len(candidate) - 1; i >= 0; i-- {
    if candidate[i] >= dividend {
        ans |= 1 << i;
        dividend = dividend - candidate[i]
    }
    }

    if negative {
        return -ans
        }
    return ans

    

}
