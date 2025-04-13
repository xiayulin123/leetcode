/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int findGCD(int a, int b){
    int tmp = a;
    if(a > b) tmp = b;
    while(tmp > 0){
        if(a % tmp == 0 && b % tmp == 0) return tmp;
        tmp--;
    }
    return 1;
}
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode* prev = head;
    struct ListNode* after = head;

    while(after -> next != NULL){
        struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));

        after = after->next;
        int val = findGCD(prev->val, after->val);
        tmp-> val = val;
        prev->next = tmp;
        tmp->next = after;
        prev = prev->next->next;
    }
    return head;

}
