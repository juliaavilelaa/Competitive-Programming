#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

void somaDasCasas(int n, int k) {
    int high = n - 1;
    int low = 0;
    
    while (low < high) {
        int sum = arr[low] + arr[high];
        if (sum < k) {
            low++;
        } else if (sum == k) {
            cout << arr[low] << " " << arr[high];
            break;
        } else {
            high--;
        }
    }
}

int main() {
    int n, num, k;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }

    cin >> k;

    somaDasCasas(n, k);

    return 0;
}