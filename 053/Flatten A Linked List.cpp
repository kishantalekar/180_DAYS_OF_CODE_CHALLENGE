/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
Node * merge(Node *l1,Node *l2){
	Node *dummy = new Node(0);
	Node *temp = dummy;
	while(l1 !=nullptr && l2 != nullptr){
		if(l1->data < l2->data){
			temp->child = l1;
			l1 = l1->child;
		}else{
			temp->child = l2;
			l2 = l2->child;
		}
		temp = temp->child;
	}
	if(l1 != nullptr){
		temp->child = l1;
	}
	if(l2 != nullptr){
		temp->child = l2;
	}
	return dummy->child;
}

Node *flatten(Node *root){
	if(root == nullptr || root->next == nullptr){
		return root;
	}
		Node *vertical = root;

		Node *horizontal = flatten(root->next);
		vertical->next = nullptr;

		root = merge(vertical,horizontal);
		return root;
	
}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	return flatten(head);
}
