func maximumProduct(nums []int) int {
    sort.Ints(nums)
    n := len(nums)

    ans := nums[0] * nums[1] * nums[n-1]
    if nums[n-1] * nums[n-2] * nums[n-3] > ans {
        return nums[n-1] * nums[n-2] * nums[n-3]
    }
    return ans
}
