#include <bits/stdc++.h>
using namespace std;

/* int readbooks(vector<int> book, int n, int t) {
    int max_count = 0;
    int curr_count = 0;
    int time = t;
    int inicio = 0;

    for (int j = 0; j < n; j++) {
        for (int i = inicio; i < n; i++) {
            if (time - book[i] >= 0) {
                time -= book[i];
                curr_count++;
            } else {
                break;
            }
        }
        max_count = max(curr_count, max_count);
        inicio++;
        time = t;
        curr_count = 0;
    }
    return max_count;
} */

int main() {
    int n, t, book, curr_time = 0, max_count = 0, pos = -1;
    vector<int> books;

    cin >> n >> t;

    for (int i = 0; i < n; i++) {
        cin >> book;
        books.push_back(book);
    }
    
    for (int i = 0; i < books.size(); i++) {
        if (curr_time + books[i] <= t) {
            curr_time += books[i];
        } else {
            curr_time += books[i];
            while (curr_time > t) {
                pos++;
                curr_time -= books[pos];
            }
        }   
        max_count = max(max_count, i - pos);
    }

    cout << max_count << endl;

    return 0;
}