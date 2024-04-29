/**
 * Definition for a Node.
 * type Node struct {
 *     Val int
 *     Children []*Node
 * }
 */

func postorder(root *Node) []int {
    ans := make([]int, 0)
    var dig func(*Node)
    dig = func(node *Node) {
        if node == nil {
            return
        }
        for _, v := range node.Children{
            dig(v)
        }
        ans = append(ans, node.Val)
    }
    dig(root)
    return ans
}
