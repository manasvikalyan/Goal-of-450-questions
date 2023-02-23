#include <iostream>
using namespace std;


void sortarray(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high)
{
    switch (arr[mid]){
        case 0:
        swap(arr[low++],arr[mid++]);
        break;
        case 1:
        mid++;
        break;
        case 2:
        swap(arr[mid],arr[high--]);
        break;



    }
}    

}

int main(){
int n;
cout<<"Enter number of elements in array:";
cin>>n;
int arr[n];


cout<<"Enter the elements in array only 0, 1 and 2:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<"Sorted array is: ";
sortarray(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;


}
