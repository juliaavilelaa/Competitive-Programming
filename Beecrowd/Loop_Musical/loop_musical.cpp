#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb push_back

typedef long long ll;

int main() { _
    // checar i anterior = (i-1+a)%a // i seguinte = (i-1)%a (???)
    // pico = ponto é maior que os dois vizinhos || ponto é menor que os dois vizinhos
    int n, picos;

    while (cin >> n && n != 0) {
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        picos = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                if ((arr[i] > arr[n-1] && arr[i] > arr[i+1]) || (arr[i] < arr[n-1] && arr[i] < arr[i+1])) {
                    picos++;
                } 
            } else if (i == n-1) {
                if ((arr[i] > arr[i-1] && arr[i] > arr[0]) || (arr[i] < arr[i-1] && arr[i] < arr[0])) {
                    picos++;
                }
            } else if ((arr[i] > arr[i-1] && arr[i] > arr[i+1]) || (arr[i] < arr[i-1] && arr[i] < arr[i+1])) {
                picos++;
            }
        }

        cout << picos << endl;
    }

	exit(0);
}	