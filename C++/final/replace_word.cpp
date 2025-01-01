#include <bits/stdc++.h>
using namespace std;
int main() {
  int t_case;
  cin >> t_case;
  for (int i = 0; i < t_case; i++) {
    string s, x;
    cin >> s >> x;
    int len_s = s.length();
    int len_x = x.length();
    for (int j = 0; j < len_s; j++) {
      for (int k = 0; k < len_x; k++) {
        if (x[k] == s[j]) {
          s[j] = '#';
          j++;
        } else {
          break;
        }
      }
    }
  }
  return 0;
}