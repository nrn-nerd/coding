#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
//   int a[n], ps[n];
vector<long long> a(n+1), ps(n+1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  ps[1] = a[1];
  for (int i = 2; i <= n; i++) {
    ps[i] = ps[i-1] + a[i];
  }
//   reverse(ps, ps);



  for (int i = n; i != 0; i--) {
    cout << ps[i] << " ";
  }
//   cout << a[0];
  return 0;
}