func findLHS(nums []int) int {
    ans := map[int]int{}
    for _, v := range nums {
        ans[v]++
    }
    result := 0
    for i, v := range ans {
        if a := ans[i+1]; a > 0 && a + v > result{
            result = a + v
        }
    }
    return result
}
