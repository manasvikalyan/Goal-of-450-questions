#include <bits/stdc++.h>
using namespace std;
int maxsubarray(int arr[],int n){
    int msf=INT_MIN,meh=0;
    for(int i=0;i<n;i++){
        meh=meh+arr[i]; //mef max so far and  meh max ending here
            if(msf<meh){
            msf=meh;
        }
        if(meh<0){
            meh=0;
        }
    }
    return msf;


}

int main(){
    int n;
    cout<<"Enter number of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Max sum of sub array is:";
    /*maxsubarray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }*/
    

    int max=maxsubarray(arr,n);
    cout<<max<<endl;
return 0;
}