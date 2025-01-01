#include <bits/stdc++.h>
using namespace std;

int main() {
  int t_case;
  cin >> t_case;

  for (int i = 0; i < t_case; i++) {
    string s, x;
    cin >> s >> x;
    int len_s = s.length(), len_x = x.length();
    string z = "";
    for (int j = 0; j < len_s; j++) {
      bool flag = true;
      for (int k = 0; k < len_x; k++) {
        if (j + k >= len_s || s[j + k] != x[k]) {
          flag = false;
          break;
        }
      }
      if (flag == true) {
        z += '#';
        j += len_x - 1;
      } else {
        z += s[j];
      }
    }
    cout << z << endl;
  }
  return 0;
}
