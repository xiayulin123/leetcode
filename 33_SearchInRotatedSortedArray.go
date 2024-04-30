func search(nums []int, target int) int {
    check := func(i int) bool {
        if nums[i] > nums[len(nums) - 1] {
            return target > nums[len(nums) - 1] && nums[i] >= target
        }
        return target > nums[len(nums) - 1] || nums[i] >= target
    }
    left, right := -1, len(nums)
    for left+1 < right {
        mid := (left + right) / 2
        if check(mid) {
            right = mid
        } else {
            left = mid
        }
    }
    if nums[right] != target {
        return -1
    }

    return right
}
