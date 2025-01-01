#include <bits/stdc++.h>
using namespace std;
int main(){
  // sum of 0 to n
  int n, sum = 0;
  cin >> n;
  // using loop
  for (int i = 0; i <= n; i++) {
    sum += i;
  }
  // using formula
  // sum = (n*(n+1))/2;
  cout << sum;
  return 0;
}