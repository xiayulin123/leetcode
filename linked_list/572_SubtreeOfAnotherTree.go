/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func isSubtree(root *TreeNode, subRoot *TreeNode) bool {
    if root == nil {
        return false
    }
    var dig func(*TreeNode, *TreeNode) bool
    dig = func(node1 *TreeNode, node2 *TreeNode) bool {
        if node1 == nil && node2 == nil {
            return true
        }
        if node1 != nil && node2 == nil {
            return false
        } else if node1 == nil && node2 != nil {
            return false
        }
        
        if node1.Val == node2.Val {
            return dig(node1.Left, node2.Left) && dig(node1.Right, node2.Right)
        } 
        return false
        
    }
    
    return isSubtree(root.Left, subRoot) || dig(root, subRoot) || isSubtree(root.Right, subRoot)
}
