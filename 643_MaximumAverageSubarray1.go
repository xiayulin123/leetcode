func findMaxAverage(nums []int, k int) float64 {
    var ans float64
    
    for j := 0; j < k; j++{
        ans += float64(nums[j])
    }
    sum := ans
    for i := k; i < len(nums); i++ {
        sum = sum - float64(nums[i-k]) + float64(nums[i])
        if sum > ans {
            ans = sum
            
        }
        
    }
    ans = ans / float64(k)
    return ans 
}
