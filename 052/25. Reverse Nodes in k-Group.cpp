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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode *temp = head;
        ListNode *org = NULL;
        ListNode *prevtail = nullptr;
        while(temp){
            int cnt = k;
            ListNode *temp2 = temp;
            ListNode *next = NULL;
            while(--cnt && temp2 !=nullptr){
               temp2 =  temp2->next ;
            }
            if(temp2 == nullptr)break;
            next = temp2->next; 
            ListNode *prev = nullptr;
            temp2 = temp;
            while(temp2 != next){
                ListNode *n = temp2->next;
                temp2->next = prev;
                prev = temp2;
                temp2 = n;
            }
            if(org == nullptr){
                org = prev;
            }
            if(prevtail){
                prevtail->next = prev;
            }

            prevtail = temp;
            temp->next = next;        
            temp= next;
        }
        return org;
    }
};