func calPoints(operations []string) int {
    var numbers []int
    ans := 0
    
    for _, v := range operations {
        if v == "+" {
            ans += numbers[len(numbers)-1] + numbers[len(numbers)-2]
            numbers = append(numbers, numbers[len(numbers)-1] + numbers[len(numbers)-2])
        } else if v == "D" {
            ans += numbers[len(numbers)-1] * 2
            numbers = append(numbers, numbers[len(numbers)-1] * 2)
        } else if v == "C" {
            ans -= numbers[len(numbers)-1]
            numbers = numbers[:len(numbers) - 1]
        } else {
            i, _ := strconv.Atoi(v)
            ans += i 
            numbers = append(numbers, i)
        }
    }
    return ans
}
