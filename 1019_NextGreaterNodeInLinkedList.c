/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextLargerNodes(struct ListNode* head, int* returnSize) {
    if(head == NULL){
        *returnSize = 0;
        return NULL;
    }
    int size = 1;
    struct ListNode* tmp;
    tmp = head;
    while(tmp->next != NULL){
        size++;
        tmp = tmp -> next;
    }
    *returnSize = size;
    int* ans = calloc(size, sizeof(int));
    tmp = head;
    int* st = calloc(size, sizeof(int));
    int top = -1;
    int changed = 0;
    while(tmp != NULL){
         int hold = top;
        while (top >= 0 && tmp->val > st[top]) {
            if (ans[top] == 0) {
                ans[top] = tmp->val;
            }
            top--;
        }
        top = hold;
        st[++top] = tmp->val;
        tmp = tmp->next;
    }
    return ans;
}
