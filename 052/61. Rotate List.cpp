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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr)return head;
        int cnt = 0;
        ListNode *temp = head;
        vector<ListNode *>vc;

        while(temp){
            vc.push_back(temp);
            temp = temp->next;
            cnt++;
        }
        k = k%cnt;
        int size = vc.size();
        while(k--){
            ListNode *temp = head;
            ListNode *prev=nullptr;
            // while(temp->next !=nullptr){
            //     prev = temp;
            //    temp =  temp->next;
            // }
            
            prev->next = nullptr;
            temp->next = head;
            head = temp;

        }
        return head;
    }
};