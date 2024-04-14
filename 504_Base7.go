func convertToBase7(num int) string {
    ans := ""
    negative := false
    if num == 0 {
        return "0"
    }
    if num < 0 {
        negative = true
        num = -num
    }
    for num >= 7 {
        digit := num % 7
        ans = strconv.Itoa(digit) + ans
        num /= 7
    }
    ans = strconv.Itoa(num) + ans
    if negative {
        ans = "-" + ans
    }
    return ans

    
}
