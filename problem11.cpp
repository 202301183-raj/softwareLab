#include<bits/stdc++.h>
using namespace std;
int maxiones(vector<int> &arr){
    int c1=0;
    int c2=0;

    for(int i=0;i<arr.size();i++){
        if(arr[i] == 1){
            c1++;
            c2=max(c1,c2);
        }else{
            c1=0;
        }
    }

        return c2;
    
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

    int ans=maxiones(arr);
    cout << "This vector in maximum ones is : " << ans << endl;

    return 0;
}
