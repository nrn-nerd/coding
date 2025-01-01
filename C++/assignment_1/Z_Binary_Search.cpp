#include <bits/stdc++.h>
using namespace std;
int main() {
  int x, y;
  bool flag = false;
  cin >> x >> y;
  int a[x];
  for (int i = 0; i < x; i++) {
    cin >> a[i];
  }
  sort(a, a + x);
  for (int i = 0; i < y; i++) {
    int z;
    cin >> z;
    int l = 0, r = x - 1;
    int mid = (l + r) / 2;
    for (int j = 0; j < x; j++) {
      if (z == a[mid]) {
        flag = true;
      } else if (z > mid) {
        l = mid;
      } else {
        r = mid;
      }
    }
    if (flag == true) {
      cout << "found" << endl;
    } else {
      cout << "not found" << endl;
    }
  }

  return 0;
}