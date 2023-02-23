#include <bits/stdc++.h>
using namespace std;
void unionnarr(int arr[],int n){    

}

int main(){
    int n,m;
    cout<<"Enter number of elements in first array:";
    cin>>n;
    cout<<"Enter number of elements in second array:";
    cin>>m;
    int a[n],b[m];
    unordered_map<int,int>map;
    
cout<<"Enter the elements in first array :";
for(int i=0;i<n;i++){
    cin>>a[i];
    map[a[i]]++;
}


cout<<"Enter the elements in second array :";
for(int i=0;i<m;i++){
    cin>>b[i];
    map[b[i]]++;
}
cout<<map.size()<<endl;


}