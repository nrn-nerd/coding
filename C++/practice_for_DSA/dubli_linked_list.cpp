#include <bits/stdc++.h>
using namespace std;
class Node {
public:
  int val;
  Node *prev, *next;
  Node(int val) {
    this->val = val;
    this->prev = NULL;
    this->next = NULL;
  }
};
// printing nodes forword
void print_nodes_forword(Node *head) {
  Node *tmp = head;
  while (tmp != NULL) {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
}
// printing nodes reverse
void print_nodes_reverse(Node *tail) {
  Node *tmp = tail;
  while (tmp != NULL) {
    cout << tmp->val << " ";
    tmp = tmp->prev;
  }
}
// insert at head
void insert_node_at_head(Node *&head, Node *&tail, int val) {
  Node *new_node = new Node(val);
  if (head == NULL) {
    head = new_node;
    tail = new_node;
    return;
  }
  head->prev = new_node;
  new_node->next = head;
  head = new_node;
}
// insert at tail
void insert_node_at_tail(Node *&head, Node *&tail, int val) {
  Node *new_node = new Node(val);
  if (tail == NULL) {
    tail = new_node;
    head = new_node;
    return;
  }
  tail->next = new_node;
  new_node->prev = tail;
  tail = new_node;
}
// input nodes in any position
void input_nodes_at_any_position(Node *head, int idx, int val) {
  Node *new_node = new Node(val);
  Node *tmp = head;
  for (int i = 1; i < idx; i++) {
    tmp = tmp->next;
  }
  new_node->next = tmp->next;
  tmp->next->prev = new_node;
  new_node->prev = tmp;
  tmp->next = new_node;
}
// deleting from head
void delete_at_head(Node *&head, Node *&tail) {
  Node *delete_node = head;
  head = head->next;
  delete delete_node;
  if (head == NULL) {
    tail = NULL;
    return;
  }
  head->prev = NULL;
}
// delete node at tail
void delete_at_tail(Node *&head, Node *&tail) {
  Node *delete_node = tail;
  tail = tail->prev;
  delete delete_node;
  if (tail == NULL) {
    head = NULL;
    return;
  }
  tail->next = NULL;
}
// delete at any position
void delete_at_any_position(Node *head, int idx) {
  Node *tmp = head;
  for (int i = 1; i < idx; i++) {
    tmp = tmp->next;
  }
  Node *delete_node = tmp->next;
  tmp->next = tmp->next->next;
  tmp->next->prev = tmp;
  delete delete_node;
}
// input nodes
void input_nodes(Node *&head, Node *&tail) {
  int val;
  while (true) {
    cin >> val;
    if (val == -1) {
      break;
    }
    insert_node_at_tail(head, tail, val);
  }
}
void reverse_dubly_linked_list(Node *head, Node *tail){
  for (Node *i = head, *j = tail; i != j && i->next != j; i = i->next, j = j->prev) {
    swap(i->val, j->val);
  }
}
int main() {
  Node *head = NULL, *tail = NULL;
  input_nodes(head, tail);
  reverse_dubly_linked_list(head, tail);
  print_nodes_forword(head);
  cout << endl;
  // print_nodes_reverse(tail);

  return 0;
}