#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
#define pb push_back
 
int main() {
    int n, m, p, l, r, x;
    vector<int> arr;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> p;
        arr.pb(p);
    }
 
    for (int i = 0; i < m; i++) {
        cin >> l >> r >> x;
        int element = arr[x-1];
        int count = 0;

        for (int j = l-1; j < r; j++) {
            if (arr[j] < element) {
                count++;
            }
        }
        int sortedpos = l+count;
        
        if (sortedpos == x) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
 
    return 0;
}