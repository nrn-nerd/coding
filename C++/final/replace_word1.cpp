#include <bits/stdc++.h>
using namespace std;

int main() {
    int t_case;
    cin >> t_case;

    while (t_case--) {
        string s, x;
        cin >> s >> x;

        // Replace all occurrences of characters in x with '#'
        for (char c : x) {
            for (char &ch : s) {
                if (ch == c) {
                    ch = '#';
                }
            }
        }

        // Remove consecutive '#' and print the result
        bool lastWasHash = false;
        for (char ch : s) {
            if (ch == '#') {
                if (!lastWasHash) {
                    cout << '#';
                    lastWasHash = true;
                }
            } else {
                cout << ch;
                lastWasHash = false;
            }
        }
        cout << endl;
    }
    return 0;
}
