/*
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
*/


Node* sortList(Node *head){
    // Write your code here.
    Node *zeroes = nullptr;
    Node *zeroes_tail = nullptr;

    Node *ones = nullptr;
    Node *ones_tail = nullptr;

    Node *gOnes = nullptr;
    Node *gOnes_tail = nullptr;

    Node *temp = head;

    while(temp != nullptr){
        int data = temp->data;

        if(data == 0){
            if(zeroes == nullptr){
                zeroes =zeroes_tail =  temp;
            }else{
                zeroes_tail->next = temp;
                zeroes_tail = zeroes_tail->next;
            }
        }else if(data == 1){
            if(ones == nullptr){
                ones =ones_tail =  temp;
            }else{
                ones_tail->next = temp;
                ones_tail = ones_tail->next;
            }
        }else{
            if(gOnes == nullptr){
                gOnes =gOnes_tail =  temp;
            }else{
                gOnes_tail->next = temp;
                gOnes_tail = gOnes_tail->next;
            }
        }
        temp = temp->next;
    }
    zeroes_tail->next = ones;
    ones_tail->next = gOnes;
    gOnes_tail->next = nullptr;
    return zeroes;
}