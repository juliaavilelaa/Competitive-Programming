#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

int partition(int low, int high) {
    int pindex = low;
    int pivot = arr[high];

    for (int i = low; i <= high; i++) {
        if (arr[i] <= pivot) {
            swap(arr[pindex], arr[i]);
            pindex++;
        }
    }
    pindex--;
    return pindex;
}

void quickSort(int low, int high) {
    if (low < high) {
        int pindex = partition(low, high);
        quickSort(low, pindex-1);
        quickSort(pindex+1, high);
    }
}

int main() {
    int n, element;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> element;
        arr.push_back(element);
    }

    quickSort(0, n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}