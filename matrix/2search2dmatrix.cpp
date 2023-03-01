#include <iostream>
#include <vector>
//given each row is sorted that is why we can apply binary search here
using namespace std;
bool searchmatrix(vector<vector<int>> &matrix ,int target){  //2d matrix datatype
    int r=matrix.size();
    int c=matrix[0].size();
    int left=0,right=r*c-1; //0 indexed matrix
    while(left<=right){
        int mid=left+(right-left)/2;
        int i = mid / c;
        int j = mid % c;
        if (matrix[i][j] == target) {
            return true;
        } else if (matrix[i][j] < target) {
           // right = mid - 1;
            left = mid + 1;
            
        } else {
            //left = mid + 1;
            right = mid - 1;
        }
    }
    return false;
}
int main(){
    int c, r, target;
    cout << "Enter number of rows and columns of matrix: ";
    cin >> c >> r;
    vector<vector<int>> matrix(c, vector<int>(r));
    cout << "Enter the matrix elements in sorted order: ";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Enter the target value: ";
    cin >> target;
    bool result = searchmatrix(matrix, target);
    if (result) cout << "Target value is present in the matrix\n";
    else cout << "Target value is not present in the matrix\n";
    return 0;
}

    