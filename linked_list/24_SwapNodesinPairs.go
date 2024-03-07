/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func swapPairs(head *ListNode) *ListNode {
    if head == nil || head.Next == nil {
        return head
    }
    newHead := head.Next
    current := head
    var last *ListNode
    for current != nil && current.Next != nil{
        next := current.Next
        nextNext := next.Next

        next.Next = current
        if last != nil {
            last.Next = next
        }
        current.Next = nextNext
        last = current
        current = nextNext
    }

    return newHead
}
