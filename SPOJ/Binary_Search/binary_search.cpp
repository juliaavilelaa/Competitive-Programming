#include <iostream>
#include <vector>
using namespace std;

vector<int>array;

int verify(int mid) {
    int i = mid;
    while (array[i-1] == array[mid]) {
        i--;
    } 
    return i;
}

int search(int n, int element) {
    int low = 0, high = n-1, mid;
    while (low <= high) {
        mid = (low + high)/2;
        if (element == array[mid]) {
            return verify(mid);
        } else if (element < array[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    } 
    return -1;
}

int main() {
    int n, q, element, num;

    scanf("%d %d", &n, &q);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        array.push_back(num);
    }
    for (int i = 0; i < q; i++) {
        scanf("%d", &element);
        printf("%d\n", search(n, element));
    }

    return 0;
}