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
ListNode *reverseLinkedList(ListNode *prev,ListNode *curr){
    if(curr == nullptr){
        return prev;
    }else{
        ListNode *next = curr->next;
        curr->next =prev;
        return reverseLinkedList(curr,next);
    }
}
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        return reverseLinkedList(nullptr,head);
        
    }
};