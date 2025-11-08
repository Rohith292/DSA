#include<bits/stdc++.h>
using namespace std;

void setMatrixZeros(vector<vector<int>>& matrix, int m ,int n){
    int row[m]={0};
    int col[n]={0};

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(row[i]==1||col[j]==1){
                matrix[i][j]=0;
            }
        }
    }
}
int main(){
    int m,n;
    cout<<"Enter the no of rows in the matrix:";
    cin>>m;
    cout<<endl;
    cout<<"Enter the no of columns in the matrix:";
    cin>>n;
    cout<<endl;
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the elements of the matrix (only 0 and 1):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    setMatrixZeros(matrix, m, n);
    cout << "Matrix after setting rows and columns to zero:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}