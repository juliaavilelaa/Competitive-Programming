#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    bool check = true;

    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= 1; j--) {
            if (i < j && i + j == n && __gcd(i, j) == 1) {
                cout << i << " " << j << endl;
                check = false;
                break;
            }
        }
        if (!check) {
            break;
        }
    }

    return 0;
}