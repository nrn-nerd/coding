#include <bits/stdc++.h>
using namespace std;
int main() {
  int t_case;
  cin >> t_case;
  while (t_case--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    bool flag = true;
    for (int i = 0; i < n-1; i++) {
      if (a[i] > a[i + 1]) {
        flag = false;
        break;
      } else {
        flag = true;
      }
    }
    if (flag) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}