#include <iostream>
using namespace std;
void rearrange(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j){
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }
}

int main(){
int n;
cout<<"Enter number of elements in array:";
cin>>n;
int arr[n];


cout<<"Enter the elements in array :";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<"Rearranged array is:";
rearrange(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;


}