#include <iostream>
using namespace std;

int main() {
    int t;
    int it = 0;

    cin >> t;

    while (it < t) {
        int n, m, goodOnes = 0, extraOnes = 0, minimum = 0;
        cin >> n >> m;
        string bin;

        for (int i = 0; i < n; i++) {
            cin >> bin;
            for (int j = 0; j < m; j++) {
                char* ptrBin = &bin[0];
                if ((j == 0 || j == m-1) && i > 0 && i < n-1) {
                    minimum++;
                    if (ptrBin[j] == '1') {
                        goodOnes++;
                    }
                }
                else if (i == 0 || i == n-1) {
                    minimum++;
                    if (ptrBin[j] == '1') {
                        goodOnes++;
                    }
                } 
                else if (ptrBin[j] == '1') {
                    extraOnes++;
                }
                ptrBin = NULL;
                delete ptrBin;
            }
        }

        if (goodOnes == minimum) {
            cout << 0 << endl;
        } else if (extraOnes >= minimum - goodOnes) {
            cout << minimum - goodOnes << endl;
        } else {
            cout << -1 << endl;
        }

        it++;
    }

    return 0;
}