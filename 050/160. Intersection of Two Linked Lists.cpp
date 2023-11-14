/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        int lenA = 0;
        int lenB = 0;

        ListNode *temp1 = headA;
        ListNode *temp2 = headB;

        while(temp1 !=nullptr){
            temp1 = temp1->next;
            lenA++;
        }
        while(temp2 != nullptr){
            temp2 = temp2->next;
            lenB++;
        }

        int diff = max(lenA,lenB) - min(lenA,lenB);
        temp1 = headA;
        temp1 = headB;
        if(lenA > lenB){
            while(diff--){
                headA = headA->next;
            }
        }else{
            while(diff--){
                headB = headB->next;
            }
        }
        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};