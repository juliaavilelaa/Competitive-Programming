#include <iostream>
#include <string>
using namespace std;


int main() {
    int t;
    string sentence;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> sentence;

        if (sentence.back() == 'o') {
            cout << "FILIPINO" << endl; 
        } else if (sentence.back() == 'u') {
            cout << "JAPANESE" << endl;
        } else if (sentence.back() == 'a') {
            cout << "KOREAN" << endl;
        }
    }

    return 0;
}