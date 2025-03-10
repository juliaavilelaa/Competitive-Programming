#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num, aux;

    while (cin >> n && n != 0) {
        stack<int> stack;
        aux = 0;

        for (int i = 0; i < n; i++) {
            cin >> num;

            if (num != aux + 1) {
                stack.push(num);
            } 
            else if (!stack.empty() && num + 1 == stack.top()) {
                aux = num;
                while (!stack.empty() && aux + 1 == stack.top()) {
                    aux = stack.top();
                    stack.pop();
                }
            } 
            else {
                aux = num;
            }
        }
        if (stack.empty()) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}