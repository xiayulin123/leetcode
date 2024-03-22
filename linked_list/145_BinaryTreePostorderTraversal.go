/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func postorderTraversal(root *TreeNode) []int {
    var dig func(*TreeNode)
    ans := make([]int, 0)
    dig = func(root *TreeNode){
        if root == nil {
            return
        }
        dig(root.Left)
        dig(root.Right)
        ans = append(ans, root.Val)
    }
    dig(root)
    return ans
}
