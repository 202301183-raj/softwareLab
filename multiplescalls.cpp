#include<bits/stdc++.h>
using namespace std;

int nthnumber(int n){
    if( n == 0) return 0;
    if(n == 1)  return 1;

    return nthnumber(n-1)+nthnumber(n-2);
}
int f(int n){
    return nthnumber(n);
}

int main(){
    int n;
    cout<<"enter the nth fibonacci number : ";
    cin>>n;

    cout<<f(n);
    return 0;
}