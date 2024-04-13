func nextGreaterElement(nums1 []int, nums2 []int) []int {
    var ans []int
    n := len(nums1)
    
    for i := 0; i < n; i++ {
        look := false
        found := false
        for j := 0; j < len(nums2); j++ {
            if nums2[j] == nums1[i] {
                look = true
            }
            if look {
                if nums2[j] > nums1[i] {
                    ans = append(ans, nums2[j])
                    found = true
                    break
                }
            }
        }
        if !found {
            ans = append(ans, -1)
            fmt.Println(i)

        }
    }
    return ans
}   
