#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node *next;
    
    Node(int data):data(data),next(NULL){}

    Node(int data, Node *Next) : data(data), next(Next){}
};
class Singly{
     private:
        Node *head;
        Node *tail;

    public:
  
        Singly():head(NULL),tail(NULL){}

        
        void insertAtBeg(int data){
            Node *newNode = new Node(data,this->head);
            if(this->head == NULL){
                this->tail = newNode;
            }
            this->head= newNode;
        }
        void insertAtLast(int data){
            Node *newNode = new Node(data);
            if(head == NULL){
                head = newNode;
            }else{
              Node *temp = head;
            
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;  
            }
            
        }
        void insertAtTail(int data){
            Node *newNode = new Node(data);
            if(this->tail == NULL){
            this->head = newNode;
            this->tail = head;
            }else{
            this->tail->next = newNode;
            this->tail = newNode;
            }
        }
        void insertAtPos(int data,int pos){

            Node *newNode = new Node(data);
            Node *temp = this->head;
            if(pos == 1){
            newNode->next = temp;
            this->head = newNode;
            return;
            }
            for (int i = 1; i < pos - 1 && temp->next!= NULL;i++){
            temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
            if(newNode->next == NULL){
            this->tail = newNode;
            }
        }
        void display(){
            Node *temp = head;
            while(temp != NULL){
            cout << temp->data;

            if(temp->next != NULL){
                cout << "->";
            }

            temp = temp->next;
            }
            cout << endl;
        }
        void printTailAndHead(){
            cout << "head" << this->head->data << endl;
            cout << "tail" << this->tail->data << endl;
        }
        void deletionAtBeg(){
            Node *temp = head;
            head =  head->next;

            cout << temp->data << endl;
            free(temp);
        }
        void deletionAtLast(){
            Node *ptr1 = head;
            Node *ptr2 = ptr1;
            if(head->next == NULL){
            free(head);
            head = NULL;
            tail = NULL;
            return;
            }
            while (ptr1->next != NULL)
            {
            ptr2 = ptr1;
            ptr1 = ptr1->next;
            }
            ptr2->next = NULL;
            free(ptr1);
            tail = ptr2;
        }
        void deletionAtPos(int pos){
            Node *p1 = head;
            Node *p2 = p1;
            if(pos == 1){
            deletionAtBeg();
            return;
            }
            int count = 1;
            while(count < pos){
            p2 = p1;
            p1 = p1->next;
            count++;
            }
            if(p1->next == NULL){
            deletionAtLast();
            return;
            }
            p2->next = p1->next;
            free(p1);

        }
};
int main()
{
        Singly sl;
        sl.insertAtTail(10);
        sl.insertAtTail(20);
        sl.insertAtTail(30);
        sl.insertAtTail(40);
        sl.insertAtTail(50);
       

        sl.display();
        sl.deletionAtPos(3);
        sl.display();

        return 0;
}