func permute(nums []int) [][]int {
    var ans [][]int
    n := len(nums)
    path := make([]int, n)
    visited := make([]bool, n)

    var process func(int)

    process = func(i int){
        if i == n {
            ans = append(ans, append([]int(nil), path...))
            return
        }
        for x, t := range visited{
            if !t {
                path[x] = nums[i]
                visited[x] = true
                process(i+1)
                visited[x] = false
            }
        }
    }
    process(0)
    return ans

}
