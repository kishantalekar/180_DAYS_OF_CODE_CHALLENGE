#include<iostream>
using namespace std;

 class Node {
        public:
            int data;
            Node *left;
            Node *right;
            int height;

     public:
            Node(int d){
                this->data = d;
                this->left = nullptr;
                this->right = nullptr;
                this->height = 0;
            }

        int getValue(){
            return data;
        }
       
    };
 class BST{
    public:
        Node *root;

        
    public:

        BST()
        {
            root = nullptr;
        }
         int getHeight(Node* node){
            if(node == nullptr){
                return -1;
            }
            return node->height;
        }
        Node * insert_node(int value){
           Node *temp  = new  Node(value);
           return temp;
       }

        Node *insert_node(Node *node, int value) {
        if (node == nullptr) {
            return insert_node(value);
        }

        if (value < node->getValue()) {
            node->left = insert_node(node->left, value);
        } else if (value > node->getValue()) {
            node->right = insert_node(node->right, value);
        }
        node->height = max(getHeight(node->left), getHeight(node->right)) + 1;

        return node;
    }
    void display(){
        display(root);
    }
    void display(Node *node){
        if(node == nullptr)return;
        cout << node->getValue() <<" " << node->height << endl;
        display(node->left);
        display(node->right);
    }
    Node *getRoot(){
        return root;
    }
};

int main(){

    BST bst;

  bst.root =   bst.insert_node(bst.getRoot(), 30);
    bst.insert_node(bst.getRoot(), 20);
    bst.insert_node(bst.getRoot(), 10);
    bst.insert_node(bst.getRoot(), 40);
    bst.insert_node(bst.getRoot(), 50);
    bst.insert_node(bst.getRoot(), 60);
  

    bst.display(bst.getRoot());

    return 0;
}