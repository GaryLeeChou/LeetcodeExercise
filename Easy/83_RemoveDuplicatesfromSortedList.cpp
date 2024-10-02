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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ret_ = new ListNode();
        ListNode* ret = ret_;
        int temp = 200;
        while ( head != NULL ){
            if(temp != head->val){
                temp = head->val;
                ret->next = new ListNode(temp);
                ret = ret->next;
            }
            head = head -> next;
        }
        return ret_->next;
    }
};