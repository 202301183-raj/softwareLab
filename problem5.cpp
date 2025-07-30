#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int> &arr){
     int n=arr.size();
     int temp=arr[0];

     for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
     }
     arr[n-1]=temp;
}

int main(){
    int n;

    cout<<"enter the vector size : ";
    cin>>n;

    vector<int> arr(n);

    cout<<"enter the element in vector : ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"rotate before : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    rotate(arr);
    cout<<"rotate after : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}