class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* previous = nullptr;
        while(current){
            ListNode* next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        return previous;
    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* H = head;
        ListNode* tem = H;
        std::vector<int> arr;
        int i = 0;
        while(tem != nullptr){
            arr.push_back(tem->val);
            i++;
            tem = tem -> next;
        }
        while(i > 0){
            H->val = arr[i-1];
            H = H->next;
            i--;
        }
        return head;
    }
};