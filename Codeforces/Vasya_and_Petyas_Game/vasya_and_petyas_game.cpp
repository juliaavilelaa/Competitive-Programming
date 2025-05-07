#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(); cin.tie(0);
#define endl '\n'
 
vector<int> ans;

void primos_mult(int n) {
    for (int i = 2; i <= n; i++) {
        bool flag = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag || i == 2) {
            for (int k = i; k <= n; k *= i) {
                ans.push_back(k);
            }
        }
    }
}

int main() {
    int n; 
    cin >> n;

    primos_mult(n);

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}