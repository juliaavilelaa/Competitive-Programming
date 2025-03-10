#include <iostream>
using namespace std;

int main() {
    int n, q, i, j, sum;

    cin >> n;

    int* array = new int[n];

    for (int x = 0; x < n; x++) {
        cin >> array[x];
    }

    cin >> q;

    int y = 0;
    while (y < q) {
        cin >> i >> j;
        sum = 0;
        for (int z = i; z <= j; z++) {
            sum += array[z];
        }
        cout << sum << endl;
        y++;
    }

    delete[] array;

    return 0;
}