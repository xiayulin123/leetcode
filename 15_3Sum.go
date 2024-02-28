func threeSum(nums []int) [][]int {
    sort.Ints(nums)
    n := len(nums)
    ans := make([][]int, 0)
    for  i := 0; i < n - 2; i++ {
        if i > 0 && nums[i] == nums[i-1] {
            continue
        }
        r := n-1
        difference := -nums[i]
        for l := i + 1; l < n-1 ; l++ {
            if nums[l] == nums[l-1] && l > i + 1 {
                continue
            }
            
            for l < r && nums[l] + nums[r] > difference{
                r--
            }

            if l == r{
                break
            }
            if nums[l] + nums[r] == difference{
            ans= append(ans, []int{nums[i],nums[l],nums[r]})
        }
        }

         
    }
        return ans


    
}
