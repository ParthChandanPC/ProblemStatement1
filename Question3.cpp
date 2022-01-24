#include <bits/stdc++.h>
using namespace std;
int main() {
    cout<<"Enter the size of matrix: ";
    int n;
    cin>>n;
    cout<<"Enter the elements of the matrix: ";
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int primaryDiagonalSum=0,secondaryDiagonalSum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                primaryDiagonalSum+= a[i][j];
            }
            if((i+j)==n-1){
                secondaryDiagonalSum+= a[i][j];
            }
        }
    }
    cout<<"The sum of primary diagonal elements is "<< primaryDiagonalSum<<"\n";
    cout<<"The sum of secondary diagonal elements is "<< secondaryDiagonalSum<<"\n";
    return 0;
}
