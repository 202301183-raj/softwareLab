#include<bits/stdc++.h>
using namespace std;
void bubble(vector<int> &arr,int i,int count,int n){
     if(count == n-1){
        return;
     }

     if(i == n-1){
        bubble(arr,0,count+1,n);
        return;
     }

     if(arr[i] > arr[i+1]){
        swap(arr[i],arr[i+1]);
     }

     bubble(arr,i+1,count,n);


}
int main(){

    int n;
    cout<<"enter the number of element : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"enter the element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"sort before array : "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    bubble(arr,0,0,n);
    cout<<endl;

    cout<<"sort after arrray : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}