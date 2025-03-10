#include <bits/stdc++.h>
using namespace std;

bool verificarCadeia(string a) {
    stack<char> stack;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '{' || a[i] == '[' || a[i] == '(') {
            stack.push(a[i]);
        } else if (!stack.empty() && a[i] == '}' && stack.top() == '{') {
            stack.pop();
        } else if (!stack.empty() && a[i] == ']' && stack.top() == '[') {
            stack.pop();
        } else if (!stack.empty() && a[i] == ')' && stack.top() == '(') {
            stack.pop();
        } else {
            return false;
        }
    }
    if (stack.empty()) {
        return true;
    }
    return false;
}

int main() {
    int t;
    string a;

    cin >> t;

    while (t--) {
        cin >> a;
        if (verificarCadeia(a)) {
            cout << 'S' << endl;
        } else {
            cout << 'N' << endl;
        }
    }

    return 0;
}