#include<bits/stdc++.h>
using namespace std;
void sorting(vector<int> &arr,int n){
     int i;
     int j;
     int swaped=0;
     for(j=0;j<n;j++){
     for(int k=0;k<n-1;k++){
         i=k+1;
         if(arr[k] > arr[i]){
            swap(arr[k],arr[i]);
            swaped=1;
            cout<<"Run...\n";
         }

         if(swaped == 0){
            break;
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
    cout<<"sort before array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    sorting(arr,n);
    cout<<endl;
    cout<<"sort after array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
  
    return 0;
}
