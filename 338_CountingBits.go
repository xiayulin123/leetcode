func countBits(n int) []int {
    ans := make([]int, n+1)
    for i := 0; i <= n; i ++ {
        index := 0
        for tmp := i; tmp > 0; tmp &= tmp - 1{
            index ++
        }
        ans[i] = index
    }
    return ans
}
