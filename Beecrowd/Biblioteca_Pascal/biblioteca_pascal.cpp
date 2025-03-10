#include <iostream>
#include <vector>
using namespace std;

bool verify(vector<int> vec, int n) {
    for (int i = 0; i < n; i++) {
        if (vec[i] == n) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, d, a;

    while ((cin >> n >> d) && (n != 0 && d != 0)) {

        vector<int> dinners(n, 0);

        for (int i = 0; i < d; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a;
                if (a == 1) {
                    dinners[j] += 1;
                }
            }
        }

        if (verify(dinners, d)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}