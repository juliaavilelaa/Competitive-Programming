#include <iostream>
using namespace std;

int main() {
    int xp, nb, teams = 0;

    cin >> xp >> nb;

    while (xp + nb >= 3) {
        if (xp == 0 || nb == 0) {
            break;
        } else if (nb >= xp) {
            xp -= 1;
            nb -= 2;
            teams++;
        } else {
            xp -= 2;
            nb -= 1;
            teams++;
        }
    }
    
    cout << teams << endl;

    return 0;
}