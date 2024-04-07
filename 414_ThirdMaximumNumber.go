func thirdMax(nums []int) int {
    sort.Sort(sort.Reverse(sort.IntSlice(nums)))
    tmp := nums[0]    
    time := 1
    for _, v := range nums {
        if v < tmp {
            time ++
            tmp = v
        }
        if time == 3 {
            return tmp
        }
    }
    if time < 3 {
        return nums[0]
    }
    return tmp
}
