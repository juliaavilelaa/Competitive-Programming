#include <iostream>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _
    int n;
    char l[27] = {'-', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string b[27];
    b[1] = "a";

    cin >> n;

    if (n == 1) {
        cout << 'a' << endl;
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        b[i] = b[i-1] + l[i] + b[i-1];
        if (b[i].size() > 100000) {
            b[i] = b[i].substr(0, 100000);
        }
    }

    cout << b[n] << endl;

    return 0;
}