#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // Choose the pivot as the first element
    int i = low; 
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) { 
            i++; 
        }
        while (arr[j] > pivot && j >= low + 1) { 
            j--; 
        }
        if (i < j) { 
            swap(arr[i], arr[j]); 
        }
    }

    // Place the pivot at its correct position
    swap(arr[low], arr[j]);

    return j; // Return the pivot index
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int part = partition(arr, low, high);

        quickSort(arr, low, part - 1); // Recursively sort left part
        quickSort(arr, part + 1, high); // Recursively sort right part
    }
}


int main(){
    int n;
    cout<<"enter the number of element : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"enter the element in vector : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sort before vector : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quickSort(arr,0,n-1);
    cout<<endl;

    cout<<"sort after vector : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}