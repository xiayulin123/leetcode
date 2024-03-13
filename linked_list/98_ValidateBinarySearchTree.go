/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func isValidBST(root *TreeNode) bool {
    return dig(root, math.MinInt64, math.MaxInt64)
}

func dig(root *TreeNode, min int, max int) bool {
    if root == nil {
        return true
    }   

    if root.Val <= min || root.Val >= max {
        return false
    }
    return dig(root.Right, root.Val, max) && dig(root.Left, min, root.Val)
}
