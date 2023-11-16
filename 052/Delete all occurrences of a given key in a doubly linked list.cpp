/**
 * Definition of doubly linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * deleteAllOccurrences(Node* head, int k) {
    // Write your code here
    Node *temp = head;

    while(temp != NULL && head != NULL){
        if(temp->data == k){
           if(temp == head){
               head = head->next;
               if(head != NULL){
                   head->prev = NULL;
               }
               temp = head;
            }else{
                temp->prev->next = temp->next;
                if(temp->next != NULL){
                temp->next->prev = temp->prev;
                }
                temp =temp->next;

            }
        }else{
        temp=temp->next;
        }
    }
    return head;
}
