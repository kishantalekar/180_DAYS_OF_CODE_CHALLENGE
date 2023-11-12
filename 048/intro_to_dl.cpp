/*
 * Definition for doubly-linked list.
 */
#include<vector>
#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next, *prev;
    Node() : data(0), next(nullptr), prev(nullptr) {}
    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
  };
class DoublyLinkedList{
    public:
    Node *head;

    DoublyLinkedList():head(nullptr){}

    void  insertAtLast(int data){
        Node *newNode = new Node(data);
        if(head == nullptr){
            head = newNode;
        }else{
            Node *temp = head;

            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode ->prev = temp;
        }
    }
};
void constructDLL(vector<int> &arr)
{
    // Write your code here
    int n = arr.size();
    DoublyLinkedList dl;
    for(int i = 0; i <n; i++){
        dl.insertAtLast(arr[i]);
    }
    cout << dl.head->data;
};

int main(){
  vector<int> vect;
  vect.push_back(10);
  vect.push_back(20);
  vect.push_back(30);
  vect.push_back(40);
  constructDLL(vect);
  return 0;
};