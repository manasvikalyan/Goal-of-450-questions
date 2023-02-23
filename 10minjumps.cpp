#include <bits/stdc++.h>

using namespace std;
int minjumps(int arr[],int n){
    if(n<=1){
        return 0;
    }
    if(arr[0]==0){
        return -1;
    }
    int maxreach=arr[0];
    int step=arr[0];
    int jump=1;

    for(int i=1;i<n;i++){
        if(i==n-1){
            return jump;
        }
    
    maxreach = max(maxreach, i + arr[i]);
    step--;
     if (step == 0) {
            jump++;

            if (i >= maxreach) {   //(i.e., it is impossible to reach the last element). 
            //Otherwise, it sets step to the number of steps needed to reach the farthest index that can be reached with the current number of jumps (i.e., maxReach-i).
                return -1;
            }

            step = maxreach - i;
        }
    }

    return -1;

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
    cout<<minjumps(arr,n);

}




