#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n, b, bola, dif;

    while (cin >> n >> b) {
        vector<int> globo;
        set<int> subconjunto;

        if (n == 0 && b == 0) {
            break;
        } 
        for (int i = 0; i < b; i++) {
            cin >> bola;
            globo.push_back(bola);
        }
        for (size_t i = 0; i < globo.size(); i++) {
            for (size_t j = 0; j < globo.size(); j++) {
                dif = abs(globo[i] - globo[j]);
                subconjunto.insert(dif);
            }
        }
        set<int>::iterator itr;
        int count = 0;

        for (itr = subconjunto.begin(); itr != subconjunto.end(); itr++) {
            for (int i = 0; i <= n; i++) {
                if (*itr == i) {
                    count++;
                }
            }
        }

        if (count == n+1) {
            cout << 'Y' << endl;
        } else {
            cout << 'N' << endl;
        }
    }
    
    return 0;
}