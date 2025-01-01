#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  getline(cin, s);
  bool flag = false;
  stringstream ss(s);
  string word;
  while (ss >> word) {
    if (word == "Jessica") {
      flag = true;
      break;
    }
  }
  flag == true ? cout << "YES" : cout << "NO";
  return 0;
}