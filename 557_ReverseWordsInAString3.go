func reverseWords(s string) string {
    ans := []byte(s)
    left := 0
    for i, v := range s {
        if v == ' '{
            
            tmp := ans[left : i]
            for j, n := 0, len(tmp); j < n/2; j++{
                tmp[j], tmp[n - j - 1] = tmp[n - j - 1], tmp[j]
            }
            left = i+1
        } 
        if i == len(s) - 1 {
            tmp := ans[left : i+1]
            for j, n := 0, len(tmp); j < n/2; j++{
                tmp[j], tmp[n - j - 1] = tmp[n - j - 1], tmp[j]
            }
        }
    }
    return string(ans)
}
