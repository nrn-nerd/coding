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
void insert_at_head(Node *&head, Node *&tail, int val) {
  Node *new_node = new Node(val);
  new_node->next = head;
  head = new_node;
  if (tail == NULL) {
    tail = new_node;
  }
}
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
void delte_at_idx(Node *&head, Node *&tail, int idx) {
  if (head == NULL || idx < 0)
    return;
  if (idx == 0) {
    Node *tmp = head;
    head = head->next;
    if (head == NULL) {
      tail = NULL;
    }
    delete tmp;
    return;
  }
  Node *prev = NULL, *tmp = head;
  int count = 0;
  while (tmp != NULL && count < idx) {
    prev = tmp;
    tmp = tmp->next;
    count++;
  }
  if (tmp == NULL)
    return;
  prev->next = tmp->next;
  if (tmp->next == NULL) {
    tail = prev;
  }
  delete tmp;
}
void print_nods(Node *head) {
  Node *tmp = head;
  while (tmp != NULL) {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}
int main() {
  int query;
  cin >> query;
  Node *head = NULL, *tail = NULL;
  for (int i = 0; i < query; i++) {
    int x, val;
    cin >> x >> val;
    if (x == 0) {
      insert_at_head(head, tail, val);
    } else if (x == 1) {
      insert_at_tail(head, tail, val);
    } else if (x == 2) {
      delte_at_idx(head, tail, val);
    }
    print_nods(head);
  }
  return 0;
}
