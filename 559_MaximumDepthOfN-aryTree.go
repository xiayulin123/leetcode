/**
 * Definition for a Node.
 * type Node struct {
 *     Val int
 *     Children []*Node
 * }
 */

func maxDepth(root *Node) int {
    if root == nil {
        return 0
    }
    ans := 1
    var dig func(*Node, int)
    dig = func(node *Node, level int) {
        if node == nil {
            return
        }
        level++
        for _, v := range node.Children{
            if level > ans {
                ans = level
            }
            dig(v, level)

        }
    }
    dig(root, 1)
    return ans
}

