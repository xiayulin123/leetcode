/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result = new ListNode;
        int carry = 0;
        int newCarry = 0;
        int sum = 0;
        ListNode *current = result;
        while(l1 != nullptr || l2 != nullptr){
            sum = 0;
            if(l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            if((sum + carry) >= 10){
                newCarry = 1;
                sum = (sum+carry) % 10;
            }else{
                newCarry = 0;
                sum = (sum+carry);
            }
            ListNode *tmp = new ListNode(sum);
            current->next = tmp;
            current = tmp;
            carry = newCarry;
            newCarry = 0;
        }
        if(carry == 1){
            ListNode *tmp = new ListNode(1);
            current->next = tmp;
        }
        return result->next;
    }
};