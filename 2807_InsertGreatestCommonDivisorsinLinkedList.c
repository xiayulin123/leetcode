/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int findGCD(int a, int b){
    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    if (!head || !head->next) return head;
    struct ListNode* prev = head;
    struct ListNode* after = head->next;

    while(after != NULL){
        struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));

        int val = findGCD(prev->val, after->val);
        tmp-> val = val;

        prev->next = tmp;
        tmp->next = after;

        prev = after;
        after = after->next;
    }
    return head;

}
