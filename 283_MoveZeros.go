func moveZeroes(nums []int)  {
    n := len(nums)
    k := 0
    for i := 0; i < n - 1; i++{
        if nums[i] == 0 {
            if nums[i+1] != 0 {
                nums[i-k] = nums[i+1]
                nums[i+1] = 0
            } else {
                k++
            }
        }
    }
    return
}
