type MyStack struct {
    left, right []int
}


func Constructor() MyStack {
    var new MyStack
    return new
}


func (this *MyStack) Push(x int)  {
    this.left = append(this.left, x)
    for len(this.right) != 0 {
        this.left = append(this.left, this.right[0])
        this.right = this.right[1:]
    }
    this.left, this.right = this.right, this.left
    
}


func (this *MyStack) Pop() int {
    pop := this.right[0]
    this.right = this.right[1:]
    return pop
}


func (this *MyStack) Top() int {
    return this.right[0]
}


func (this *MyStack) Empty() bool {
    return len(this.right) == 0
}


/**
 * Your MyStack object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Push(x);
 * param_2 := obj.Pop();
 * param_3 := obj.Top();
 * param_4 := obj.Empty();
 */
