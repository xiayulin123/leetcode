func canConstruct(ransomNote string, magazine string) bool {
    if len(ransomNote) > len(magazine) {
        return false
    }

    ans := [26]int{}
    for _, v := range magazine {
        ans[v - 'a']++
    }
    for _, v := range ransomNote {
        ans[v - 'a']--
        if ans[v -'a'] < 0 {
            return false
        }
    }
    return true
}
