#include<bits/stdc++.h>
using namespace std;
void sorting(vector<int> &arr,int n){
     
     for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[index] > arr[j]){
                index=j;
            }
        }
        swap(arr[index],arr[i]);
     }
}
int main(){
    int n;
    cout<<"enter the number of element : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"eneter the vector in element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"unsort array print : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    sorting(arr,n);

    cout<<"sort array print : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 

    return 0;
}