func summaryRanges(nums []int) []string {
    ans := make([]string, 0)
    for i, n:= 0, len(nums); i < n; {
        left := nums[i]
        i++
        for i < n  && nums[i-1] + 1 == nums[i] {
            i++

        }
        s := fmt.Sprintf("%v", left)
        if left < nums[i - 1] {
            s += "->" + fmt.Sprintf("%v",nums[i-1])
        }
        ans = append(ans, s)

    }

    
    return ans
}
