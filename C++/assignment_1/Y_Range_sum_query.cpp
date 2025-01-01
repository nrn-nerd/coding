#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, q;
  cin >> n >> q;
  vector<long long> v(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  vector<long long> ps(n + 1);
  ps[1] = v[1];
  for (int i = 2; i <= n; i++) {
    ps[i] = ps[i - 1] + v[i];
  }
  // for (int i = 1; i <= n; i++) {
  //   cout << ps[i] << " ";
  // }
  while (q--) {
    int l, r;
    cin >> l >> r;
    long long sum = 0;
    // for (int j = l; j <= r; j++) {
    //   sum += v[j];
    // }
    if (l == 1) {
      sum = ps[r];
    } else {
      sum = ps[r] - ps[l - 1];
    }

    cout << sum << endl;
  }
  return 0;
}