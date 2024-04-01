type NumArray struct {
    array []int
}


func Constructor(nums []int) NumArray {
    sums := make([]int, len(nums) + 1)
    for i, v := range nums {
        sums[i+1] = sums[i] + v
    }
    return NumArray{array: sums}
}


func (this *NumArray) SumRange(left int, right int) int {
    
    return this.array[right+1] - this.array[left]
}


/**
 * Your NumArray object will be instantiated and called as such:
 * obj := Constructor(nums);
 * param_1 := obj.SumRange(left,right);
 */
