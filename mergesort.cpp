#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp(high - low + 1);  // Temporary array for merging
    
    int left = low;      // Starting index of left subarray
    int right = mid + 1; // Starting index of right subarray
    int i = 0;           // Index for temporary array
    
    // Compare and merge the elements
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp[i++] = arr[left++];
        } else {
            temp[i++] = arr[right++];
        }
    }
    
    // Copy remaining elements from the left subarray (if any)
    while (left <= mid) {
        temp[i++] = arr[left++];
    }
    
    // Copy remaining elements from the right subarray (if any)
    while (right <= high) {
        temp[i++] = arr[right++];
    }
    
    // Copy the merged elements back to the original array
    for (int i = 0; i < temp.size(); i++) {
        arr[low + i] = temp[i];
    }
}

void mergesort(vector<int> &arr, int low, int high) {
    if (low >= high) {
        return; // Base case: if the array has 1 or no elements
    }
    
    int mid = (low + high) / 2;
    
    mergesort(arr, low, mid);      // Sort the left half
    mergesort(arr, mid + 1, high); // Sort the right half
    
    merge(arr, low, mid, high);    // Merge the sorted halves
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergesort(arr, 0, n - 1); // Call the merge sort function
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
