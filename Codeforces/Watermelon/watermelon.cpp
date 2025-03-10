#include <iostream>
using namespace std;

bool even(int w) {
    for (int i = 1; i < w; i++) {
        for (int j = 1; j < w; j++) {
            if ((i%2 == 0) && (j%2 == 0) && (i + j == w)) {
                return true;
            }
        }
    } return false;
}

int main() {
    int w;

    cin >> w;

    if (even(w) == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}