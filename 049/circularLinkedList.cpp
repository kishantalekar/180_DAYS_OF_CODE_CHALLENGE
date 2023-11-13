#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    Node(int data):data(data){}
};

class Circular
{
    private:
        Node *head;
        Node *tail;

      

    public: 
     Circular():head(nullptr), tail(nullptr){}
    void insertAtBeginning(int data){

        Node *temp = head;
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
    void insertAtLast(int data){
        Node *temp = head;
        Node *newNode = new Node(data);
        if(head == nullptr){
          
            head = newNode;
            tail = head;
            tail->next = head;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
            tail->next = head;
        }
    }
    void insertAtPos(int pos,int data){
        if(pos == 1){
            insertAtBeginning(data);
            return;
        }else{
            Node *temp = head;
            

            int cnt = 1;
            do{
                temp =temp->next;
                cnt++;
            } while (cnt < pos - 1 && temp->next != head);
            if(temp->next == head){
                insertAtLast(data);
            }else{
                Node *newNode = new Node(data);
                newNode->next = temp->next;
                temp->next = newNode;
            }
        }
    }
    void deletionAtBeginning(){
        if(head->next == head){
            delete head;
            head = tail = nullptr;
        }else{
            Node *temp = head;
            head = head->next;
            tail->next = head;
            delete temp;
        }
    }

    void deletionAtLast(){
        if(head->next == head){
            delete head;
            head = tail = nullptr;
        }else{
            Node *temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = tail->next;
            delete tail;
            tail = temp;
        }
    }

    void deletionAtPos(int pos){
        if(head->next == head){
            deletionAtBeginning();
        }else{
            int cnt = 1;
            Node *curr = head;
            Node *prev = nullptr;

            do{
                cnt++;
                prev = curr;
                curr = curr->next;
            } while (cnt < pos && curr->next != head);

            if(curr->next == head){
                deletionAtLast();
            }else{
                prev->next = curr->next;
                delete curr;
                curr = nullptr;
            }
        }
    }
    void display(){
        if(head == nullptr){
            cout << "List is empty";
            return;
        }
        Node *temp = head;

        do{
            cout << temp->data;
            temp = temp->next;
            if(temp != head){
                cout << "->";
            }
        } while (temp != head);
        cout << endl;
        cout << "Head -> " << head->data << " Tail -> " << tail->data << endl;

        cout << endl;
    }
};
int main()
{
    Circular cl;
    cl.insertAtLast(10);
    cl.insertAtLast(20);
    cl.insertAtLast(30);
    cl.insertAtLast(40);
    cl.insertAtBeginning(50);
    cl.insertAtBeginning(60);
    cl.insertAtBeginning(70);
    cl.insertAtBeginning(80);
    cl.display();

    cl.insertAtPos(5, 1000);
    cl.insertAtPos(20, 20000);
    cl.insertAtPos(1, 3000);
    cl.display();

    cl.deletionAtBeginning();
    cl.deletionAtLast();
    cl.deletionAtLast();
    cl.deletionAtLast();
    cl.deletionAtPos(4);
    cl.display();
    cl.deletionAtPos(4);
    cl.display();
    return 0;
}
