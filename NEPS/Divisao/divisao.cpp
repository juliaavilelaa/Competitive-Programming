#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B;

    cin >> A >> B;

    float S = A/B;

    cout << fixed << setprecision(2) << S << endl;

    return 0;
}