#include<bits/stdc++.h>
using namespace std;
int searche(vector<int> &arr,int s){

    for(int i=0;i<arr.size();i++){
        if(arr[i] == s){
            return i;
        }
    }

    return -1;
      
}

int main(){
int n;
int s;
    cout<<"enter the size of vector : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the element of vector  : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the search element : ";
    cin>>s;
    
    int ans=searche(arr,s);

    cout<<s<<" - index no. "<<ans;
    return 0;
}