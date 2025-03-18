#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _
    int n, num;
    cin >> n;
    set<int> st;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        st.insert(num);
    }

    cout << st.size() << endl;
    return 0;
}