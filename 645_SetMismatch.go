func findErrorNums(nums []int) []int {
    tmp := map[int]int{}
    ans := make([]int, 2)
    for _, v := range nums{
        tmp[v]++
    }
    for i := 1; i < len(nums)+1; i++{
        if tmp[i] == 2 {
            ans[0] = i
        } else if tmp[i] == 0 {
            ans[1] = i
        }
    }
    return ans
}
