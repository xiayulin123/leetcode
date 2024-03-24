/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func isPalindrome(head *ListNode) bool {
    ans := make([]int, 0)
    tmp := head
    for tmp != nil {
        ans = append(ans, tmp.Val)
        tmp = tmp.Next
    }
    diff := 0
    n := len(ans)/2
    j := len(ans)%2
    for ;diff < n ; diff ++ {
        if ans[n - diff - 1] != ans[n + diff + j] {
            
            return false
        }
    }
    return true
}
