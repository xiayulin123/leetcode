/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func diameterOfBinaryTree(root *TreeNode) int {
    ans := 0
    var dfs func(node *TreeNode) int
    
    dfs = func(node *TreeNode) int{
        if node == nil {
            return -1
        }
        
        l := dfs(node.Left) + 1
        r := dfs(node.Right) + 1
        if l+r > ans {
            ans = l+r
        }
        if l > r {
            return l
        } else {
            return r
        }
    }

    dfs(root)
    return ans
}
