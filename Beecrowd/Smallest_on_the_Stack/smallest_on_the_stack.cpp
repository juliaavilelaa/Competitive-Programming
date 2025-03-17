#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() { _
    char s[5];
    int n, t;
    vector<int> v, m;

    scanf("%d", &t);
    while (t--) {
        scanf("%s", &s);
        if (s[1] == 'U') {
            scanf("%d", &n);
            v.pb(n);
            if (m.empty()) {
                m.pb(n);
            } else if (n <= m[m.size()-1]) {
                m.pb(n);
            }
        } else if (s[0] == 'M') {
            if (m.empty()) {
                printf("EMPTY\n");
            } else {
                printf("%d\n", m[m.size()-1]);
            }
        } else {
            if (v.empty()) {
                printf("EMPTY\n");
            } else {
                int b = v[v.size()-1];
                v.pop_back();
                if (!m.empty() && m[m.size()-1] == b) {
                    m.pop_back();
                }
            }
        }
    }

    return 0;
}