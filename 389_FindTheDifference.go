func findTheDifference(s string, t string) byte {
    ans := make(map[byte]int)
    for i, _ := range s {
        ans[s[i]]++
    }
    for i, _ := range t {
        ans[t[i]]--
        if ans[t[i]] < 0 {
            return t[i]
        }
    }
    return 'a'
}
