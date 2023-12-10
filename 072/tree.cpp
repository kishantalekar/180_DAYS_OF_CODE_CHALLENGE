
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
void prettyDisplay(Node *root,int level){
  if(root == nullptr) return;

  prettyDisplay(root->right, level + 1);

  if(level != 0){
    for (int i = 0; i < level - 1;i++){
      cout << "|\t\t";
    }
    cout << "|-------->" << root->data << endl;
  }else{
    cout << root->data << endl;
  }
  prettyDisplay(root->left, level + 1);
}
int main() {
  Node *root = populate();
  cout <<endl<<endl;
  display(root);
  cout << endl;

  prettyDisplay(root, 0);
  return 0;
}