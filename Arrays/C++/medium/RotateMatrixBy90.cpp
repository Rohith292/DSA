#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>>& matrix, int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
int main(){
    int n;
    cout<<"Enter the no of rows and columns of the matrix(square matrix)"<<endl;
    cin>>n;
    cout<<endl;
    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the elements of the matrix" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    rotateMatrix(matrix,n);
    cout<<"the matrix rotated by 90 degrees is "<<endl;
    for(const auto& it:matrix){
        for(auto val:it){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}