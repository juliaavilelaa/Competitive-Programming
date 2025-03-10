#include <iostream> 
using namespace std;
 
int main() {
    long long int n, r;
    int luckyNumber = 0;
 
    cin >> n;
 
    while (n != 0) {
        r = n%10;
        if (r == 4 || r == 7) {
            luckyNumber++;
        } 
        n = n/10;
    }
 
    if (luckyNumber == 4 || luckyNumber == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}