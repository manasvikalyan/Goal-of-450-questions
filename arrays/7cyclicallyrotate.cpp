#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements in array:";
    cin>>n;
    int i;
    int arr[n];
    cout<<"Enter elements in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int e;
    cout<<"After cyclically rotating the array:";
    e=arr[n-1];
    for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=e;
    
    for(int i=0;i<n;i++){
       cout<<arr[i];
    }

}