func arrayPairSum(nums []int) int {
    sort.Ints(nums)
    ans := 0
    for i, v := range nums{
        if i % 2 == 0 {
            ans += v
        }
    }
    return ans
}
