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
bool check_list(Node *head, Node *head1) {
  Node *tmp = head;
  Node *tmp1 = head1;
  while (tmp != NULL && tmp1 != NULL) {
    if (tmp->val != tmp1->val) {
      return false;
    }
    tmp = tmp->next;
    tmp1 = tmp1->next;
  }
  if (tmp != NULL || tmp1 != NULL) {
    return false;
  }
  return true;
}
int main() {
  Node *head = NULL, *tail = NULL;
  Node *head1 = NULL, *tail1 = NULL;
  input_nodes(head, tail);
  input_nodes(head1, tail1);
  bool check = check_list(head, head1);
  if (check == true) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
