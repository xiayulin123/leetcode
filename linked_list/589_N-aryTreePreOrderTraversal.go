/**
 * Definition for a Node.
 * type Node struct {
 *     Val int
 *     Children []*Node
 * }
 */

func preorder(root *Node) []int {
    ans := make([]int, 0)
    var dig func(*Node)
    dig = func(node *Node) {
        if node == nil {
            return
        }
        ans = append(ans, node.Val)
        for _, v := range node.Children{
            dig(v)
        }
    }
    dig(root)
    return ans
}
