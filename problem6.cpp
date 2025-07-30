#include<bits/stdc++.h>
using namespace std;

void reversev(vector<int> &arr,int i,int j){
     
     while(i <= j){
         swap(arr[i],arr[j]);
         i++;
         j--;
     }
}
void rotate(vector<int> &arr,int k){
     
     reversev(arr,0,k-1);
     reversev(arr,k,arr.size()-1);
     reversev(arr,0,arr.size()-1);
     
}

int main(){
    int n;
    int k;

    cout<<"enter the vector size : ";
    cin>>n;
    cout<<"how many times rotate vector for places : ";
    cin>>k;
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

    rotate(arr,k);
    cout<<"rotate after : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}