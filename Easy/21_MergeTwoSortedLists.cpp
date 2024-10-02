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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL && list2 == NULL) return list1;
        ListNode * ret_ = new ListNode();
        ListNode * ret = ret_;
        while( list1 != NULL || list2 != NULL){
            if(list1 == NULL){
                ListNode * temp = new ListNode(list2->val);
                ret->next = temp;
                ret = ret->next;
                list2 = list2->next;
            }else if(list2 == NULL || list1->val <= list2->val ){
                ListNode * temp = new ListNode(list1->val);
                ret->next = temp;
                ret = ret->next;
                list1 = list1->next;
            }else{
                ListNode * temp = new ListNode(list2->val);
                ret->next = temp;
                ret = ret->next;
                list2 = list2->next;
            }
        }
        return ret_->next;
    }
};