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
void input_nodes(Node *&head, Node *&tail) {
  int val;
  while (true) {
    cin >> val;
    if (val == -1) {
      break;
    }
    insert_at_tail(head, tail, val);
  }
}
int find_difference(Node *head) {
  int max_val = INT_MIN;
  int min_val = INT_MAX;
  Node *temp = head;
  while (temp != NULL) {
    if (temp->val > max_val) {
      max_val = temp->val;
    }
    if (temp->val < min_val) {
      min_val = temp->val;
    }
    temp = temp->next;
  }
  return max_val - min_val;
}
int main() {
  Node *head = NULL;
  Node *tail = NULL;
  input_nodes(head, tail);
  int difference = find_difference(head);
  cout << difference;
  return 0;
}
