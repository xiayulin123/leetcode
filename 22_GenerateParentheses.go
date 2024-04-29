func generateParenthesis(n int) []string {
    m := 2 * n
    var ans []string
    var dig func(int, int)
    path := make([]byte,  m)
    dig = func(i, left int) {
        if i == m {
            ans = append(ans, string(path))
            return
        }
        if left < n {
            path[i] = '('
            dig(i+1, left+1)
        }
        if i - left < left {
            path[i] = ')'
            dig(i+1, left)
        }
    }
    dig(0,0)
    return ans
}
