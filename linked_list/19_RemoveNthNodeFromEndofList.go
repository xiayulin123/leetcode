/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

func removeNthFromEnd(head *ListNode, n int) *ListNode {
    d := &ListNode{0, head}
    fast, slow := d, d
    for i := 0; i <= n; i++{
        fast = fast.Next
    }
    for fast != nil{
        fast = fast.Next
        slow = slow.Next
    }
    slow.Next = slow.Next.Next
    return d.Next

}
