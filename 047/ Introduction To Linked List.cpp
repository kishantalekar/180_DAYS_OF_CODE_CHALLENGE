/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

class Singly{
    public:
    Node *head;
    Singly(){
        head = NULL;
    }
    void insertAtBeg(int data){
        Node *newNode = new Node(data,head);
        head  = newNode;
    }
};

Node* constructLL(vector<int>& arr) {
    // Write your code here
    Singly sl ;
    for(int i = arr.size()-1; i>=0; i--){
        sl.insertAtBeg(arr[i]);
    }

    return sl.head;






}