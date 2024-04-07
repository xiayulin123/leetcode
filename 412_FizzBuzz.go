func fizzBuzz(n int) []string {
    ans := make([]string, n)
    for i := 0; i < n; i++ {
        if (i+1) % 15 == 0 {
            ans[i] = "FizzBuzz"
        } else if (i+1) % 3 == 0 {
            ans[i] = "Fizz"
        } else if (i+1) % 5 == 0 {
            ans[i] = "Buzz"
        } else {
            
            ans[i] = fmt.Sprintf("%v", i+1)
        }
    }
    return ans
}
func fizzBuzz(n int) (ans []string) {
    for i := 1; i <= n; i++ {
        sb := &strings.Builder{}
        if i % 3 == 0 {
            sb.WriteString("Fizz")
        }
        if i % 5 == 0 {
            sb.WriteString("Buzz")

        } 
        if sb.Len() == 0 {
            sb.WriteString(strconv.Itoa(i))
        }
        ans = append(ans, sb.String())
    }
    return 
}
