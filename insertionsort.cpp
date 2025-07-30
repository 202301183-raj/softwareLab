#include<bits/stdc++.h>
using namespace std;
void sorting(vector<int> &arr,int n){
     int i;
     int j;

     for(int k=0;k<n-1;k++){
        i=k;
        j=i+1;
        while(arr[i] > arr[j]){
             swap(arr[i],arr[j]);
             if(i > 0){
                i--;
                j--;
             }
        }
     }
}
int main(){
    int n;
    cout<<"enter the number of element : ";
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sorting before array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    sorting(arr,n);
    cout<<endl;

    cout<<"sorting after array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}