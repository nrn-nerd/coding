#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;

  if (n == 1) {
    cout << 'X';
  }
  if (n > 1 && n % 2 != 0) { // step #
    for (int i = 0, inner_space = n - 2, outer_space = 1; i < n / 2;
         i++, inner_space -= 2, outer_space++) {
      cout << "\\";
      for (int j = 0; j < inner_space; j++) {
        cout << " ";
      }
      cout << "/";
      cout << endl;
      for (int j = 0; j < outer_space; j++) {
        cout << " ";
      }
      if (inner_space == 1) {
        cout << 'X';
      }
    }
    cout << endl;

    // step ##

    for (int i = n / 2 - 1; i >= 0; i--) {
      for (int j = 0; j < i; j++) {
        cout << " ";
      }
      cout << "/";

      for (int j = 0; j < n - 2 * (i + 1); j++) {
        cout << " ";
      }

      cout << "\\";
      cout << endl;
    }
  }

  return 0;
}