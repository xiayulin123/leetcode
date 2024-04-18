/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func getMinimumDifference(root *TreeNode) int {
    ans, prev := math.MaxInt64, -1
    var dfs func(*TreeNode)
    dfs = func(node *TreeNode) {
        if node == nil {
            return
        }
        dfs(node.Left)
        if prev != -1 && node.Val - prev < ans {
            ans = node.Val - prev
        }
        prev = node.Val
        dfs(node.Right)
    }
    dfs(root)
    return ans
}
