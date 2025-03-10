#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

int main() { _
    int t, a, b;

	cin >> t;

	while (t--) {
		cin >> a >> b;
		int dif = b - a;
		if (dif == 0) {
			cout << 0 << endl;
		} else if ((dif < 0 && abs(dif) % 2 == 0) || (dif > 0 && abs(dif) % 2 != 0)) {
			cout << 1 << endl;
		} else {
			cout << 2 << endl;
		}
	}

	exit(0);
}