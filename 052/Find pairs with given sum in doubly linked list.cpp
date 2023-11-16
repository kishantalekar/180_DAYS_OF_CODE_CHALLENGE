/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 *************************************************************************/
#include<bits/stdc++.h>
vector<pair<int, int>> findPairs(Node* head, int k)
{
    // Write your code here.
    Node *temp = head;
    unordered_map<int,int>mp;
    vector<pair<int,int>> ans;

    temp = head;
    while(temp != NULL){
        int diff = k - temp->data;
        if(mp.find(diff)!=mp.end()){
            ans.push_back({diff,temp->data});
        }
        mp[temp->data]++;
        temp = temp->next;
    }
   
    return ans;
}

