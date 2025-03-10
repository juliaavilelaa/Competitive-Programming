#include <iostream>
using namespace std;

int main() {
    string s;
    int m, l, r, count = 0, memo[100001];

    cin >> s >> m;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        }
        memo[i] = count;
    }

    while (m--) {
        cin >> l >> r;
        cout << memo[r - 1] - memo[l - 1] << endl;
    }

    return 0;
}