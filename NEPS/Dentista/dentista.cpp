#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, x, y, count = 1;
    vector<pair<int, int>> horarios;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        horarios.push_back(make_pair(x, y));
    }

    sort(horarios.begin(), horarios.end(), [](auto &left, auto &right) {
        return left.second < right.second;
    });

    int x_before = horarios[0].first;
    int y_before = horarios[0].second;
    for (int i = 1; i < n; i++) {
        if (horarios[i].first < y_before) {
            continue;
        } else {
            count++;
            x_before = horarios[i].first;
            y_before = horarios[i].second;
        }
    }

    cout << count << endl;

    return 0;
}