#include<bits/stdc++.h>

//given each row is sorted that is why we can apply binary search here
using namespace std;

int main(){
    int r,c;
    cout<<"Enter number of rows and columns:";
    cin>>r>>c;
    cout<<"Enter the elements in array:";
    int M[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>M[i][j];
        }
    }

    int arr[r*c];
    int index=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[index]=M[i][j];
            index++;
        }
    }
    sort(arr, arr+(r*c));
    if((r*c)%2==0){
        cout<<"Medians are:";
        cout<<arr[(r*c)/2]<<" "<<arr[(r*c)/2]-1;
    }
    if((r*c)%2!=0){
        cout<<"Median is:";
        cout<<arr[(r*c)/2];
    }
    return 0;

}