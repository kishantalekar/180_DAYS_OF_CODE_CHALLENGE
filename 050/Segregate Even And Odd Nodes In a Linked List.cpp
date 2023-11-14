/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr) {};
 *		Node(int x) : data(x), next(nullptr) {}
 *		Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node * insertAtLast(Node *head,int data){
    Node *newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return newNode;
    }else{
        Node *temp = head;
        while(temp->next != nullptr){
            temp = temp ->next;
        }
        temp->next =newNode;
        return head;
    }
}
Node* segregateEvenOdd(Node* head)
{
    // Write your code here
   Node *even =nullptr;
   Node *odd = nullptr;
   Node *even_tail = nullptr;
   Node *odd_tail = nullptr;

   Node *temp = head;

   while(temp){
       int data = temp->data;
       if(data % 2 == 0){
           if(even == nullptr){
               even =even_tail =  temp;
           }else{
               even_tail->next = temp;
               even_tail = even_tail->next;
           }
       }else{
           if(odd == nullptr){
               odd =odd_tail =  temp;
           }else{
               odd_tail->next = temp;
               odd_tail = odd_tail->next;
           }
       }
       temp = temp->next;

   }
   if(even == nullptr){
       return odd;
   }
   even_tail->next = odd;
   odd_tail->next = NULL;
    return even;
    
}
