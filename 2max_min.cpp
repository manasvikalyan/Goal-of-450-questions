#include <iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter the number of elements in array:";
    cin>>n;
    cout<<"Enter the elements in array:";
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int max,min;
    if(n==1){ //only one element in array
    max==arr[0];
    min==arr[0];
    }
    else{
        if(arr[0]>arr[1]){  
            min=arr[1]; //assuming second element min and first element max
            max=arr[0];
        }
        else{
            min=arr[0]; //assuming first elememt min and second element max
            max=arr[1];

        }
        
        for(int i=2;i<n;i++){   //start comparing for third element to arr[1] and arr[0]
            if(arr[i]>max){  
                max=arr[i];
            }
            if (arr[i]<min){
                min=arr[i];
            }
        }
    }
    cout<<"Minimum element is:"<<min<<endl;
    cout<<"Maximum element is:"<<max;
    return 0;
    
}