#include <bits/stdc++.h>
using namespace std;
class Node {
  public:
  int val;
  Node *next;
  Node(int val){
    this->val = val;
    this->next = NULL;
  }
};
void insert_at_tail(Node *&head, int val){
  Node *newnode = new Node(val);
  if (head == NULL) {
    head = newnode;
    return;
  }
  Node *tmp = head;
  while (tmp->next != NULL) {
    tmp = tmp->next;
  }
  tmp->next = newnode;
}
void print_nodes(Node *head){
  Node *tmp = head;
  while (tmp != NULL) {
    cout << tmp->val << endl;
    tmp = tmp->next;
  }
}
int main(){
  // Node *head = new Node(10);
  Node *head = NULL;
  insert_at_tail(head, 20);
  print_nodes(head);
  return 0;
}