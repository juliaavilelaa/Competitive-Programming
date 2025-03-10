// ΔT = ΔS/Vm (tempo = deslocamento/velocidade)

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double d, L, v1, v2;

    cin >> d >> L >> v1 >> v2;

    cout << fixed << setprecision(20) << (L - d)/(v1 + v2) << endl;

    return 0;
}