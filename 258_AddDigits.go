func addDigits(num int) int {
    var d func(int) 
    d = func(n int)  {
        numStr := strconv.Itoa(n)
        num = 0
        for _, digit := range numStr {
            digitInt, _ := strconv.Atoi(string(digit))
            num += digitInt
        }
        if num >= 10 {
            d(num)
        }
        return
    }
    d(num)
    return num
}

