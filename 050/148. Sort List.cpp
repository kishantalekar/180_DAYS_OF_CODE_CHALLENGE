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
    ListNode* sortList(ListNode* head) {
        
        if(head == nullptr || head ->next == nullptr)return head;

        ListNode *temp = head;
        

        while(temp->next != nullptr){
            ListNode *second = temp->next;
            ListNode *min = temp;
            
            while(second!=nullptr){
                if(min->val > second->val){
                  
                    min = second;
                }
                
                second = second->next;
            }
            if(temp != min){
               int t = min->val;
               min->val = temp->val;
               temp->val = t;

            }
            temp = temp->next;
        }
        return head;
    }
};