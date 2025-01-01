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
  // sorting
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {

      if (st[i].eng < st[j].eng) {
        Students tmp;
        tmp = st[i];
        st[i] = st[j];
        st[j] = tmp;
      }
      if (st[i].eng == st[j].eng) {
        if (st[i].math < st[j].math) {
          Students tmp;
          tmp = st[i];
          st[i] = st[j];
          st[j] = tmp;
        }
      }

      if (st[i].math == st[j].math) {
        if (st[i].id > st[j].id) {
          Students tmp;
          tmp = st[i];
          st[i] = st[j];
          st[j] = tmp;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id
         << " " << st[i].math << " " << st[i].eng << endl;
  }
  return 0;
}