/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func binaryTreePaths(root *TreeNode) []string {
    var ans []string
    if root == nil {
        return ans
    }
    sub := ""
    var dig func(root *TreeNode, sub string)
    dig = func(root *TreeNode, sub string){
        if root.Left == nil && root.Right == nil {
            if len(sub) != 0 {
                sub = sub + "->" + strconv.Itoa(root.Val)

            } else {
                sub = strconv.Itoa(root.Val)
            }
            ans = append(ans, sub)
            return
        }

        if root.Left != nil && root.Right != nil {
            if len(sub) != 0 {
                sub = sub + "->" + strconv.Itoa(root.Val)

            } else {
                sub = strconv.Itoa(root.Val)
            }
            dig(root.Left, sub)
            dig(root.Right, sub)
        } else if root.Left != nil {
            if len(sub) != 0 {
                sub = sub + "->" + strconv.Itoa(root.Val)

            } else {
                sub = strconv.Itoa(root.Val)
            }
            dig(root.Left, sub)

        } else if root.Right != nil {
            if len(sub) != 0 {
                sub = sub + "->" + strconv.Itoa(root.Val)

            } else {
                sub = strconv.Itoa(root.Val)
            }
            dig(root.Right, sub)

        }
        

    }
    dig(root, sub)
    return ans
    
}
