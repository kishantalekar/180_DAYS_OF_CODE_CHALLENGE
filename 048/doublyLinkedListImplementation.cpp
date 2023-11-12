#include<iostream>
using namespace std;

class Node{
    public:
        Node *prev;
        int data;
        Node *next;

    Node(int d){
        prev = nullptr;
        data = d;
        next = nullptr;
    }
};

class DoublyLinkedList
{
    private:
        Node *head;
        Node *tail;

    public :

    DoublyLinkedList():head(nullptr){}

    void insertAtBeginning(int data){
        Node * newNode = new Node(data);

        if(head == nullptr){
            head = newNode;
            tail = head;
        }
        else
        {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        }
    }
    void insertAtLast(int data){
        Node *newNode = new Node(data);

        if(head == nullptr){
        head = newNode;
        tail = head;
        return;
        }else{
        Node *temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        tail = tail->next;
        }
    }
    void insertAtPos(int data,int pos){
        if(pos == 1){
        insertAtBeginning(data);
        return;
        }else{
        Node *newNode = new Node(data);
        Node *temp = head;
        int cnt = 1;
        while(cnt <pos-1 && temp->next != nullptr){
            temp = temp->next;
            cnt++;
        }
        if(temp->next == nullptr){
            temp->next = newNode;
            newNode->prev = temp;
            tail = tail->next;
        }
        else
        {
            temp->next->prev = newNode;
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
        }
        }
    }
    void deletionAtBeginning(){
        if(head->next ==nullptr){
        free(head);
        head = nullptr;
        tail = nullptr;
        return;
        }
        Node *temp = head;
        head = head->next;
        head->prev = nullptr;
        free(temp);
    }

    void deletionAtLast(){
        if(head->next == nullptr){
            free(head);
        head = nullptr;
        tail = nullptr;
        }
        Node *temp = tail;
        tail = tail->prev;
        tail->next = nullptr;
        free(temp);
    }
    void deletionAtPos(int pos){
        if(pos == 1){
        deletionAtBeginning();
        }else{
        Node *temp = head;
        int cnt = 1;
        while (cnt < pos && temp->next != nullptr)
        {
        temp = temp->next;
        cnt++;
        }
        if(temp->next == nullptr){
        deletionAtLast();
        }
        else
        {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        }
        }
    }
    void display(){
        Node *temp = head;

        while(temp != nullptr){
        cout << temp->data;
        if(temp->next != nullptr){
            cout << "->";
        }
        temp = temp->next;
        }
        cout << endl;
        cout << "Head " << head->data << " Tail " << tail->data << endl<<endl;
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.insertAtLast(10);
    dl.insertAtLast(20);
    dl.insertAtLast(30);
    dl.insertAtLast(40);
    dl.insertAtLast(50);
    dl.display();
    
    return 0;
}