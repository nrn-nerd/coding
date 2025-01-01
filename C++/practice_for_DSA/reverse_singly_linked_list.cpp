#include <bits/stdc++.h>
using namespace std;
class Node {
public:
  int val;
  Node *next;
  Node(int val) {
    this->val = val;
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
void insert_node_at_tail(Node *&head, Node *&tail, int val) {
  Node *new_node = new Node(val);
  if (tail == NULL) {
    tail = new_node;
    head = new_node;
    return;
  }
  tail->next = new_node;
  tail = new_node;
}
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
void reverse_list(Node *&head, Node *tail, Node *tmp){
  if (tmp->next == NULL) {
    head = tmp;
    return;
  }
  reverse_list(head, tail, tmp->next);
  tmp->next->next = tmp;
  tmp->next = NULL;
  tail = tmp;

}
int main() {
  Node *head = NULL, *tail = NULL;
  input_nodes(head, tail);
  reverse_list(head, tail, head);
  print_nodes_forword(head);

  return 0;
}