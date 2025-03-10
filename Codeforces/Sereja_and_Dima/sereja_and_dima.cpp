#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> cards;

int main() {
    int n, number, sereja = 0, dima = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> number;
        cards.push_back(number);
    }

    int lastOne = 1, larger;
    while (cards.size() != 0) {
        if (cards.front() > cards.back()) {
            larger = cards.front();
            cards.erase(cards.begin());
        } else {
            larger = cards.back();
            cards.pop_back();
        }

        if (lastOne == 1) {
            sereja += larger;
            lastOne = 0;
        } else if (lastOne == 0) {
            dima += larger;
            lastOne = 1;
        }
    }
    
    cout << sereja << " " << dima << endl;

    return 0;
}