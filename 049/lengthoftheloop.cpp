/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {
    // Write your code here

    Node *slow = head;
    Node *fast = head;
    int i =0;
    int j=0;
    while(fast != NULL && fast->next !=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){
            slow = head;
            while(slow !=fast){
                fast=fast->next;
                slow = slow->next;
            }
            int cnt = 1;
            
            while(slow->next != fast){
                cnt++;
                slow = slow->next;
            }
            return cnt;
        }
        
    }
    return 0;
}
