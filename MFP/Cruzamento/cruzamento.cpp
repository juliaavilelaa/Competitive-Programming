#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _ 
    int n, h;
    cin >> n;
    vector<int> plantas;

    for (int i = 0; i < n; i++) {
        cin >> h;
        plantas.push_back(h);
    }
    sort(plantas.begin(), plantas.end());

    int i = 0;
    int j = n-1;

    int maior = 0;
    while (i < j) {
        maior = max(maior, (plantas[i] + plantas[j]) / 2);
        i++;
        j--;
    }
    cout << maior << endl;

    exit(0);
}