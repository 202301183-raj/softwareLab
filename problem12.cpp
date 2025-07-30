#include<bits/stdc++.h>
using namespace std;
int singledigit(vector<int> &arr){
    int xor1=0;

    for(int i=0;i<arr.size();i++){
        xor1=xor1^arr[i];
    }

    return xor1;
    
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

    int ans=singledigit(arr);
    cout << "This vector in maximum ones is : " << ans << endl;

    return 0;
}
