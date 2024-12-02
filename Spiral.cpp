#include<iostream>
using namespace std;
void Spiral_mat(int matrix[4][4], int m, int n){
    int top=0 , bottom = m-1, left=0, right=n-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++) {
            cout<<matrix[top][i]<<" ";
        }
        top++;
        
        for(int i=top;i<=bottom;i++){
            cout<<matrix[i][right]<<" ";
        }
        right--;
      if(top<=bottom) {
        for(int i=right; i>=left;i--){
            cout<<matrix[bottom][i]<<" ";
        }
        bottom--;
    }
    if(left<=right){
        for(int i=bottom;i>=top;i--){
            cout<<matrix[i][left]<<" ";
        }
        left++;
    }
}
}
int main() {
    int matrix[4][4] = {
                       {1,2,3,4},
                       {5,6,7,8},
                       {9,10,11,12},
                       {13,14,15,16}
    };
    int m=4, n=4;
    Spiral_mat(matrix,m,n);
    
}