func firstUniqChar(s string) int {
    ans := [26]int{}
    for _,v := range s {
        ans[v - 'a']++
    }
    for i, v := range s{
        if ans[v - 'a'] == 1 {
            return i
        }
    }
    return -1
}
