#include <iostream>
using namespace std;

void reverse_array(int arr[],int s,int e){
int temp;
while(s<e){
    temp=arr[s];
    arr[s]=arr[e];
    arr[e]=temp;
    s++;
    e--;
}
}

int main()
{
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Reversed array is:";
    reverse_array(arr,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}