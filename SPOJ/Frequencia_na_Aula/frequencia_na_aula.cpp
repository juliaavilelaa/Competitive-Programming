#include <iostream>
#include <set>
using namespace std;

set<int> lista;

int main() {
    int n, i, v;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> v;
        lista.insert(v);
    }

    cout << lista.size() << endl;

    return 0;
}