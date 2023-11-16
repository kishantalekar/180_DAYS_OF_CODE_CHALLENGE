
/**
 * Definition of doubly linked list:
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

Node * removeDuplicates(Node *head)
{
    // Write your code here
    Node *temp = head;

    while(head->data == head->next->data){
        head = head->next;
        if(head->next == NULL){
            return head;
        }
    }

    while(temp != NULL){
        int data = temp->data;
        if(temp->next != NULL && data == temp->next->data){
            Node *p = temp;
            while(p != NULL &&  p ->data == data){
                p = p->next;
            }
            if(p != NULL){
               p->prev = temp;
               temp->next =p;  
            }
            else{
                temp ->next= NULL;
            }
        }else{
            temp = temp->next;
        }
    }
    return head;
}
