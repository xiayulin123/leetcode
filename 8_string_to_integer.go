func myAtoi(s string) int {
    ans := 0
    i := 0
    negative := 1
    for i < len(s) && s[i] == ' '{
        i++
    }
    if i < len(s) {
        if s[i] == '-'{
            negative *= -1
            i++
        } else if s[i] == '+'{
            i++
        }
    }
    for i < len(s) && s[i] >= '0' && s[i] <= '9'{
        ans = ans * 10 + int(s[i] - '0')
        if negative*ans < math.MinInt32 {
			return math.MinInt32
		} else if negative*ans > math.MaxInt32 {
			return math.MaxInt32
		}
        i++
    }
    return ans*negative
}
