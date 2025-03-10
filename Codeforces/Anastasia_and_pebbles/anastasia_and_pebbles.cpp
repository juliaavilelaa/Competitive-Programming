#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double n, k, pedras, cont = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> pedras;
        cont += ceil(pedras/k);
    } 

    int dias = ceil(cont/2);
    cout << dias << endl;

    return 0;
}