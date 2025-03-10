#include <iostream>
using namespace std;

bool colarFotos(int x, int y, int l1, int h1, int l2, int h2) {
    if ((l1 + l2) <= x && max(h1, h2) <= y) {
        return true;
    } else if ((l1 + h2) <= x && max(l2, h1) <= y) {
        return true;
    } else if ((l2 + h1) <= x && max(h2, l1) <= y) {
        return true;
    } else if ((h1 + h2) <= x && max(l1, l2) <= y) {
        return true;
    } else if (max(l1, l2) <= x && (h1 + h2) <= y) {
        return true;
    } else if (max(l1, h2) <= x && (l2 + h1) <= y) {
        return true;
    } else if (max(l2, h1) <= x && (h2 + l1) <= y) {
        return true;
    } else if (max(h1, h2) <= x && (l1 + l2) <= y) {
        return true;
    } 
    return false;
}

int main() {
    int x, y, l1, h1, l2, h2;

    cin >> x >> y
        >> l1 >> h1
        >> l2 >> h2;

    if (colarFotos(x, y, l1, h1, l2, h2)) {
        cout << 'S' << endl;
    } else {
        cout << 'N' << endl;
    }

    return 0;
}
