func findMaxConsecutiveOnes(nums []int) int {
    ans := 0
    tmp := 0
    for _, v := range nums {
        if v == 1 {
            tmp++
        } else {
            if tmp > ans {
                ans = tmp
                
            }
            tmp = 0
        }
        
    }
    
    if tmp > ans {
        ans = tmp
    }
    
    return ans
}
