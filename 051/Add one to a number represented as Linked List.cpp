/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * reverese(Node*head){
    Node *prev = NULL;
    Node *curr = head;
    while(curr){
        Node * next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
Node *addOne(Node *head)
{
    // Write Your Code Here.

    Node *temp = reverese(head);
    head = temp;
    int sum = temp->data+1;
    int val = sum %10,carry = sum/10;
    temp->data= val;

    if(carry){
        Node *prev = temp;
        temp = temp->next;
        while(temp){
            sum = temp->data+carry;
            val = sum%10;
            carry = sum/10;

            temp->data = val;
            prev = temp;
            temp = temp->next;
        }
        if(carry){
            prev->next = new Node(carry);
        }
    }
   
    temp = reverese(head);
    return temp;
}
