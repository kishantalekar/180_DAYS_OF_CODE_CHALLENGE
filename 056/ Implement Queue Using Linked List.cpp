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
 * 
 * Definition of Queue
 * struct Queue {
 *   Node* front;
 *   Node* rear;
 *   void push(int);
 *   int pop();
 *   
 *   Queue() {
 *       front = rear = NULL;
 *   }
 * };
 */

void Queue::push(int x) {
    // Write Your Code Here
    if(front == nullptr){
        rear = new Node(x);
        front = rear;
    }else{
        rear->next = new Node(x);
        rear = rear->next;
    }
}

int Queue::pop() {
    // Write Your Code Here
    if(front == nullptr){
        return -1;
    }
    int data = front->data;
    front = front->next;
    return data;
}