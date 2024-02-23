import (
    "fmt"
    "math")

func threeSumClosest(nums []int, target int) int {
    sort.Ints(nums)
    n := len(nums)
    min := math.MaxInt
    ans := 0
    s := 0
    for i, val := range nums[:n-2] {
        if i>0 && val == nums[i-1]{
            continue
        }
        s = val + nums[i+1] + nums[i+2]
        if s > target {
            if s - target < min {
                ans = s
            }
            return ans
        }

        s = val + nums[n-2] + nums[n-1]
        if s < target {
            if target - s < min {
                min = target - s
                ans = s
            }
            continue
        }

        a, b := i+1, n-1
        for a < b {
            s = val + nums[a] + nums[b]
            if s == target {
                
                return s
            }
            if s > target {
                if s - target < min {
                    min = s - target
                    ans = s
                }
                b --
            }else{
                if target - s < min {
                    min = target - s
                    ans = s
                }
                a++
            }
        }
    }
    return ans
}

