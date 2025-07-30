#include<bits/stdc++.h>
using namespace std;
void zeroend(vector<int> &arr){
    int n=arr.size();
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            j=i;
            break;
        }
    }
    if(j == -1){
        return;
    }

    for(int i=j+1;i<n;i++){
        if(arr[i] != 0){
        swap(arr[i],arr[j]);
        j++;
        }
    }
}
int main(){
    int n;
    cout<<"enter the size of vector : ";
    cin>>n;

    vector<int> arr(n);

    cout<<"enter the element of vector  : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"oparation before vector  : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    zeroend(arr);

    cout<<"oparation after vector : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}