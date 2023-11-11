#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

class Singly{
    private:
        Node *head;
    public:
        Singly() : head(nullptr){}

        void insertAtBeg(int data ){
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        }
        void display(){
        Node *temp = head;
        while(temp != NULL){
            cout << temp->data << endl;
            temp = temp->next;
        }
        }
};

int main()
{
        Singly sl;
        sl.insertAtBeg(10);
        sl.insertAtBeg(20);
        sl.display();

        return 0;
}