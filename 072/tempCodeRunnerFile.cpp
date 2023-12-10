
#include <iostream>
using namespace std;

class Node{
  public:
      int data;
      Node* left;
      Node *right;
      Node(int d){
        data = d;
        left = NULL;
        right = NULL;
      }
};


void populate(Node *root){
  cout << "do you want to enter data for left node of " << root->data << "? (y/n)" << endl;
  bool left;
  cin >> left;
  if(left){
    cout << "Enter the data for the left node of " << root->data << endl;
    int data;
    cin >> data;
    root->left = new Node(data);
    populate(root->left);
  }
  cout << "do you want to enter data for right node of " << root->data << "?";
  bool right;
  cin >> right;
  if(right){
    cout << "Enter the data for the right node of " << root->data << endl;
    int data;
    cin >> data;
    root->right = new Node(data);
    populate(root->right);
  }
}
Node* populate(){
  cout << "Enter the data for the root node: " << endl;
  int data;
  cin >> data;
  Node* root = new Node(data);
  populate(root);
  return root;
}
void display(Node *root){
  if(root == NULL){
    return;
  }
  cout << root->data << " ";
  display(root->left);
  display(root->right);
}

int main() {
  Node *root = populate();
  cout <<endl<<endl;
  display(root);
  return 0;
}