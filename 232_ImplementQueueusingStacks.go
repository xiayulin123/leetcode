type MyQueue struct {
    left []int
    right []int
}


func Constructor() MyQueue {
    return MyQueue{}
}


func (this *MyQueue) Push(x int)  {
    this.left = append(this.left, x)
    
}


func (this *MyQueue) Pop() int {
    if len(this.right) == 0{
        for len(this.left) > 0 {
                top := this.left[len(this.left) - 1]
                this.right = append(this.right, top)
                this.left = this.left[:len(this.left) - 1]
            }
    }
    
    if len(this.right) > 0 {
        top := this.right[len(this.right)-1]
        this.right = this.right[:len(this.right)-1]
        return top
    }
    return 0
}


func (this *MyQueue) Peek() int {
    if len(this.right) > 0{
        return this.right[len(this.right) -1]
    }
    return this.left[0]
}


func (this *MyQueue) Empty() bool {
    if len(this.left) == 0 && len(this.right) == 0{
        return true
    } else{
        return false
    }
}

