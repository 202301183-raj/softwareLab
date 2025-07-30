#include<bits/stdc++.h>
using namespace std;

int dupli(vector<int> &arr){
    int n=arr.size();

    int i=0;
    int j=1;

    while(j < n){
        if(arr[i] == arr[j]){
            j++;
        }else{
            i++;
            arr[i]=arr[j];
        }
        
    }
    return i+1;
}
// int dupli(vector<int> &arr){
//     set<int> brr;

//     for(int i=0;i<arr.size();i++){
//         brr.insert(arr[i]);
//     }
//     int index=0;
//     for(auto it:brr){
//         arr[index]=it;
//         index++;
//     }
//     return index;
// }

int main() {
    int n;
    cout<<"enter the size of vector : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"enter the value of vector : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=dupli(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"your vector size of sorted element is : "<<ans<<endl;
    cout<<"your vector is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
    
}
