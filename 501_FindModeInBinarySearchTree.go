/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func findMode(root *TreeNode) []int {
    count, max, current := 0,0,0
    var ans []int 
    calculate := func(val int){
        if val != current {
            current = val
            count = 1
        } else {
            count++
        }
        if count == max {
            ans = append(ans, current)
        } else if count > max {
            max = count
            ans = []int{current}
        }
    }

    var dig func(node *TreeNode) 
    dig = func(node *TreeNode) {
        if node == nil {
            return
        }
        dig(node.Left)
        calculate(node.Val)
        dig(node.Right)
    }

    dig(root)
    return ans
}
