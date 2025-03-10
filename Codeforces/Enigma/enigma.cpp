// Summer School - Dia 6
#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher, crib;
    bool match = false;
    int count = 0;

    cin >> cipher >> crib;

    for (int i = 0; i < cipher.size(); i++) {
        int ini = i;
        if (ini == cipher.size()-crib.size()+1) {
            break;
        }
        for (int j = 0; j < crib.size(); j++) {
            if (cipher[ini] == crib[j]) {
                match = true;
                break;
            }
            ini++;
        }
        if (!match) {
            count++;
        }
        match = false;
    }

    cout << count << endl;

    return 0;
}