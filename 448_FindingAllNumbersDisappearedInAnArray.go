func findDisappearedNumbers(nums []int) []int {
    ans := make([]int, len(nums)+1)
    for _, v := range nums {
        ans[v]++
    }
    it := make([]int, 0)
    for i, v := range ans {
        if v == 0 && i != 0{
            it = append(it, i)
        }
    }
    return it
}
