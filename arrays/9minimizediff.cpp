#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cout<<"Enter number of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"Enter k:";
    cin>>k;
    cout<<"Enter elements in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if (arr[i]<=k){
            arr[i]+=k;
        }
        else{
            arr[i]-=k;
        }
    }

    cout<<"After performing operations of inc or dec:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorted array is:";
   sort(arr, arr + n);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
    cout<<endl;
    cout<<"Max Difference between max and min element:";
    cout<<arr[n-1]-arr[0];

    return 0;    
}
