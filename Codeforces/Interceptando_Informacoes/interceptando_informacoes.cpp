#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    int n;
    bool falha = false;

    for (int i = 0; i < 8; i++) {
        cin >> n;
        if (n == 9) {
            falha = true;
        }
    }
	
    falha ? cout << "F" << endl : cout << "S" << endl;

	exit(0);
}	