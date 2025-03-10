#include <iostream>
using namespace std;

int main() {
    int t, n, l, jump, high = 0, low = 0, c = 1;

    cin >> t;

    while (t--) {
        cin >> n >> l;
        for (int i = 1; i < n; i++) {
            cin >> jump;
            if (jump > l) {
                high++;
                l = jump;
            } else if (jump < l) {
                low++;
                l = jump;
            }
        }
        cout << "Case " << c << ": " << high << " " << low << endl;  
        c++;
        high = 0;
        low = 0;
    }

    return 0;
}