func maxCount(m int, n int, ops [][]int) int {
    a := len(ops)
    if a == 0 {
        return m * n
    }
    left := 0
    right := 0
    for i := 0; i < a; i++ {
        if left == 0 && right == 0 {
            left = ops[0][0]
            right = ops[0][1]
        } else {
            if left > ops[i][0] {
                left = ops[i][0]
            }
            if right > ops[i][1] {
                right = ops[i][1]
            }
        }
    }
    return left * right
}
