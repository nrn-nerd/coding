#include <bits/stdc++.h>
using namespace std;
class Node{
  public:
  int val;
  Node *next;
  Node(int val){
    this->val = val;
    this->next = NULL;
  }
};
void insert_at_tail(Node *&head, Node *&tail, int val){
  Node *new_node = new Node(val);
  if (head == NULL) {
  head = new_node;
  tail = new_node;
  }
  tail->next = new_node;
  tail = new_node;
}
void print_nods(Node *head){
  Node *tmp = head;
  while (tmp != NULL) {
  cout << tmp->val << endl;
  tmp = tmp->next;
  }
}
void delete_at_tail(Node *head, Node *&tail, int idx){

}
int main(){
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *tail = new Node(100);
  head->next = a;
  a->next = tail;
  insert_at_tail(head, tail, 200);
  insert_at_tail(head, tail, 500);
  delete_at_tail(head, tail, 3);
  print_nods(head);

  return 0;
}