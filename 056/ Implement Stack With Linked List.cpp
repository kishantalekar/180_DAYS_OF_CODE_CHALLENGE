/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    //Write your code here
    Node *head;
    int size; 

public:
    Stack()
    {
        //Write your code here
        head = NULL;
        size = 0;

    }

    int getSize()
    {
        //Write your code here
        return size;
    }

    bool isEmpty()
    {
        //Write your code here
        if(head == NULL){
            return true;
        }
        return false;
    }

    void push(int data)
    {
        //Write your code here
        if(head == NULL){
            head = new Node(data);
        }else{
            Node *newNode = new Node(data);
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    void pop()
    {
        //Write your code here
        if(head == NULL){
            return;
        }else{
            head = head->next;
            size--;
        }
    }

    int getTop()
    {
        //Write your code here
        if(head == NULL){
            return -1;
        }
        return head->data;
    }
};