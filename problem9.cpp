#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &arr1, vector<int> &arr2) {
    vector<int> temp;

    int i = 0, j = 0;

    // Traverse both arrays
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            if (temp.empty() || arr1[i] != temp.back()) {
                temp.push_back(arr1[i]);
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (temp.empty() || arr2[j] != temp.back()) {
                temp.push_back(arr2[j]);
            }
            j++;
        } else {
            // Both are equal, add any one
            if (temp.empty() || arr1[i] != temp.back()) {
                temp.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    // Store remaining elements of arr1
    while (i < arr1.size()) {
        if (temp.empty() || arr1[i] != temp.back()) {
            temp.push_back(arr1[i]);
        }
        i++;
    }

    // Store remaining elements of arr2
    while (j < arr2.size()) {
        if (temp.empty() || arr2[j] != temp.back()) {
            temp.push_back(arr2[j]);
        }
        j++;
    }

    return temp;
}

int main() {
    int n, m;

    cout << "Enter the first vector size: ";
    cin >> n;

    cout << "Enter the second vector size: ";
    cin >> m;

    vector<int> arr1(n);
    vector<int> arr2(m);

    cout << "Enter the first vector elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the second vector elements: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> arr3 = findUnion(arr1, arr2);

    cout << "Union vector is: ";
    for (int i = 0; i < arr3.size(); i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}
