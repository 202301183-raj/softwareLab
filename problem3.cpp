#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
         int n=nums.size();

         for(int i=1;i<n;i++){
            if(nums[i] <= nums[i-1]){
                return false;
            }
         }
         return true;
}

int main() {
    int n;
    cout<<"enter the size of vector : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"enter the value of vector : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool ans=check(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"your vector is : "<<ans;
    
    return 0;
    
}
