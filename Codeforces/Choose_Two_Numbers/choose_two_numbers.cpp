#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _ 
    int n, m, element;
    vector<int> A, B;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> element;
        A.push_back(element);
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> element;
        B.push_back(element);
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int sum = A[i] + B[j];
            if (mp.find(sum) == mp.end()) {
                if ((find(A.begin(), A.end(), sum) == A.end()) && (find(B.begin(), B.end(), sum) == B.end())) {
                    cout << A[i] << " " << B[j] << endl;
                    exit(0);
                } else {
                    mp[sum] = 1;
                }
            }
        }
    }

    exit(0);
}
