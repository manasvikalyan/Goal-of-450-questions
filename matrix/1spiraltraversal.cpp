#include <bits/stdc++.h>
using namespace std;

void spiraltraversal(int r, int c, int matrix[][100]){
    int top=0,left=0,bottom=r-1,right=c-1;
    while(top<=bottom && left<=right){
        //traverse left to right
        for(int i=left;i<=right;i++){
            cout<<matrix[top][i]<<" ";
        }
        top++;
    
        //traverse top to bottom
        for(int i=top;i<=bottom;i++){
            cout<<matrix[i][right]<<" ";
        }
        right--;

        //traverse left
        if (top <= bottom){
        for(int i=right;i>=left;i--){
            cout<<matrix[bottom][i]<<" ";
        }
        bottom--;
        }

        // Traverse up
        if (left <= right) {
        for(int i=bottom;i>=top;i--){
            cout<<matrix[i][left]<<" ";
        }
        left++;
        }


    }
}

int main(){
    int c,r;
    cout<<"Enter number of rows:";
    cin>>r;
    cout<<endl;
    cout<<"Enter number of columns:";
    cin>>c;
    cout<<endl;
    int matrix[100][100];
    cout<<"Enter elememts in matrix:";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        cin>>matrix[i][j];
    }
    spiraltraversal(r, c, matrix);
    return 0;
}