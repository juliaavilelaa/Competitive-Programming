// Summer School - Dia 1
#include <iostream>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _
    int t;
    cin >> t;

    while (t--) {
        int n, m;

        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 && j == m-1) {
                    cout << "W";
                } else {
                    cout << "B"; 
                }
            }
            cout << endl;
        }
    }
    exit(0);
}