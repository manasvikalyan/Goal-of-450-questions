#include <bits/stdc++.h> 
using namespace std;
int kthSmallest(int arr[], int n, int k) 
{ 
	sort(arr, arr + n); 
	return arr[k - 1]; 
} 

int main(){
    int N,k;
    cout<<"Enter number of elements in array: ";
    cin>>N;
    int arr[N];
    cout<<"Enter elements in array";
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    
    cout<<"Kth smallest element to search:";
    cin>>k;
    
    cout<<"kth smallest element to search:";
    cout<<kthSmallest(arr,N,k);

}