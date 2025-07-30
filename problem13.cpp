#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int> &arr,int s){
    int n=arr.size();
    int sm=0;
    int total=0;
    for(int i=0;i<n;i++){
        total=0;
         for(int j=i;j<n;j++){
             total+=arr[j];
             if(s == total){
                sm=max(sm,j-i+1);
             }
         }
    }
    return sm;
}

int main() {
    int n, m;

    cout << "Enter the first vector size: ";
    cin >> n;
    cout<<"enter the sum of sub array : ";
    cin>>m;
    vector<int> arr(n);
    

    cout << "Enter the first vector elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   
    int s=subarray(arr,m);

    cout << "maximum size of sub array :  "<<s<<endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
