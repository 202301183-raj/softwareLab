#include<bits/stdc++.h>
using namespace std;

int misselement(vector<int> &arr) {
    int xor1=0;
    int xor2=0;

    for(int i=0;i<arr.size();i++){
        xor1=xor1^arr[i];
        xor2=xor2^(i+1);
    }

    return xor1^xor2;
}

int main() {
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the vector elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans=misselement(arr);
    cout << "The missing element is " << ans << endl;

    return 0;
}
