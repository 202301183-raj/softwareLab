#include <bits/stdc++.h>
using namespace std;

void insertion(vector<int> &arr, int i, int j, int n) {
    if (i >= n - 1) {
        return; // Base case: stop recursion when sorting is complete
    }

    if (i < 0) { // Reset `i` to `j` and move to the next element
        i = j;
        j++;
    } else { // Swap elements until the current element is in the correct position
        while (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            i--;
        }
    }

    // Recursive call to process the next element
    insertion(arr, i + 1, j + 1, n);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array before sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the insertion sort function
    insertion(arr, 0, 1, n);

    cout << "Array after sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
