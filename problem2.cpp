#include<bits/stdc++.h>
using namespace std;

int slargest(vector<int>& arr) {
    int l=arr[0];
    int sl=INT16_MIN;

    for(int i=0;i<arr.size();i++){
        if(l < arr[i]){
            sl=l;
            l=arr[i];
        }
        if(l > arr[i] && sl < arr[i]){
            sl=arr[i];
        }
    }

    if(sl == INT16_MIN){
        return -1;
    }
    return sl;
    
}

int main() {
    int n;
    cout<<"enter the size of vector : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"enter the value of vector : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int smax=slargest(arr);
    cout<<"your vector : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"second maximum : "<<smax;

    return 0;
    
}
