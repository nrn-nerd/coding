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
int find_index(Node *head, int x) {
  int idx = 0;
  Node *tmp = head;
  while (tmp != NULL) {
    if (tmp->val == x) {
      return idx;
    }
    tmp = tmp->next;
    idx++;
  }
  return -1;
}
int main() {
  int t_case, x;
  cin >> t_case;
  while (t_case > 0) {
    Node *head = NULL;
    Node *tail = NULL;
    input_nodes(head, tail);
    cin >> x;
    int idx = find_index(head, x);
    cout << idx << endl;
    t_case--;
  }

  return 0;
}
