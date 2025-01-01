#include <bits/stdc++.h>
using namespace std;

class Students {
public:
  string nm, s;
  int cls, id, math, eng;
};

int main() {
  int n;
  cin >> n;
  Students st[n];
  for (int i = 0; i < n; i++) {
    cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].math >>
        st[i].eng;
  }
  sort(st, st + n, [](const Students &a, const Students &b) {
    if (a.eng != b.eng) {
      return a.eng > b.eng;
    } else if (a.math != b.math) {
      return a.math > b.math;
    } else {
      return a.id < b.id;
    }
  });

  for (int i = 0; i < n; i++) {
    cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id
         << " " << st[i].math << " " << st[i].eng << endl;
  }

  return 0;
}
