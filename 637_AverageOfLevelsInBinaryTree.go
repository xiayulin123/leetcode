/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func averageOfLevels(root *TreeNode) []float64 {
    if root == nil {
        return nil
    }
    var ans []float64
    queue := []*TreeNode{root}
    for len(queue) > 0 {
        tmp := 0
        len := len(queue)
        for i := 0; i < len; i++ {
            tmp += queue[i].Val
            if queue[i].Left != nil {
                queue = append(queue, queue[i].Left)
            }
            if queue[i].Right != nil {
                queue = append(queue, queue[i].Right)
            }
        }
        ans = append(ans, float64(tmp)/float64(len))
        queue = queue[len:]
    }
    return ans
}

