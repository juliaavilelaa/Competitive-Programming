#include <iostream>
#include <string>
#include <set>
using namespace std;

set<int> asciiAlphabet;

int main() {
    int n;
    string sentence;
    
    cin >> n >> sentence;

    for (int i = 0; i < n; i++) {
        char lowercase = tolower(sentence[i]);
        int asciiValue = (int)lowercase;
        asciiAlphabet.insert(asciiValue);
    }

    if (asciiAlphabet.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}