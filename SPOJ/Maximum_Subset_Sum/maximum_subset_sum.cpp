#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int maxsubset(vector<int> arr) {
    int curr_max = 0, max_so_far = 0;

    for (int i = 0; i < arr.size(); i++) {
        curr_max = max(arr[i], arr[i] + curr_max);
        max_so_far = max(curr_max, max_so_far);
    }
    return max_so_far;
}

int main() {
    int t, n, num;

    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            cin >> num;
            arr.pb(num);
        }
        cout << maxsubset(arr) << endl;
    }

    return 0;
}