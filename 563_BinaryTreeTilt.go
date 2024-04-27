/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func findTilt(root *TreeNode) int {
    ans := 0
    var dig func(*TreeNode) int
    dig = func(node *TreeNode) int {
    if node == nil {
        return 0
    }
    left := dig(node.Left)
    right := dig(node.Right)
    ans += abs(left - right)
    return left + right + node.Val
    }
    dig(root)
    return ans

}
func abs (value int) int {
    if value < 0 {
        return -value
    }
    return value
}
