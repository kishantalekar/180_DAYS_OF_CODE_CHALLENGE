/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *deleteLast(Node *list){
    // Write your code here
    Node *temp = list;

    if(temp->next == NULL){
        free(temp);
        list = NULL;
    }
    Node *prev = temp;
    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    free(temp);
    prev->next =NULL;
return list;
}