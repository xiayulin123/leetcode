func isSubsequence(s string, t string) bool {
    if len(s) == 0 {
        return true
    }
    for i,_ := range t {
        if s[0] == t[i]{
            if len(s) > 1 {
                s = s[1:]

            } else {
                return true
            }
        }
    }
    return len(s)==0
}
