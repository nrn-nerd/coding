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
void insert_at_tail(Node *&head, Node *&tail, int val) {
  Node *new_node = new Node(val);
  if (head == NULL) {
    head = new_node;
    tail = new_node;
  } else {
    tail->next = new_node;
    tail = new_node;
  }
}
void print_nods(Node *head) {
  Node *tmp = head;
  while (tmp != NULL) {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}
void remove(Node *head) {
  Node *tmp = head;
  while (tmp != NULL) {
    Node *node1 = tmp;
    Node *node2 = tmp->next;
    while (node2 != NULL) {
      if (node2->val == tmp->val) {
        node1->next = node2->next;
        delete node2;
        node2 = node1->next;
      } else {
        node1 = node2;
        node2 = node2->next;
      }
    }
    tmp = tmp->next;
  }
}
int main() {
  Node *head = NULL, *tail = NULL;
  int val;
  while (true) {
    cin >> val;
    if (val == -1)
      break;
    insert_at_tail(head, tail, val);
  }
  remove(head);
  print_nods(head);
  return 0;
}
