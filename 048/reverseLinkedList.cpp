/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    // Write your code here   
    Node *temp =head;
    Node *prev = NULL;
    Node *next = NULL;

    Node *curr = temp;

    while(curr != NULL){

        prev = curr->prev;
        next = curr->next;

        curr->prev = next;
        curr->next = prev;

        temp = curr;
        curr = next;
        
    }
   

    return temp;
}

