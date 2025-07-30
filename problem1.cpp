#include<bits/stdc++.h>
using namespace std;

int largest(vector<int>& arr) {
    int l=arr[0];
    

    for(int i=0;i<arr.size();i++){
        if(l < arr[i]){
            l=arr[i];
        }
    }
    return l;
    
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

    int maxi=largest(arr);
    cout<<"your vector : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"maximum : "<<maxi;

    return 0;
    
}
