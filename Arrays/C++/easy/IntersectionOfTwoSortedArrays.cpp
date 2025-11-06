#include<iostream>
#include<vector>

using namespace std;

vector<int> intersectionOfArrays(vector<int>& arr1, vector<int>& arr2,int m , int n){
    vector<int>res;
    int vis[m]={0};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j] && vis[j]==0){
                res.push_back(arr1[i]);
                vis[j]=1;
                break;
            }
            if(arr2[j]>arr1[i]){
                break;
            }
        }
    }
    return res;
}
int main(){
    int m,n,temp1,temp2;
    vector<int>arr1;
    vector<int>arr2;
    cout<<"enter the no of elements of array1"<<endl;
    cin>>m;
    cout<<"enter the elements of array1"<<endl;
    for(int i=0;i<m;i++){
        cin>>temp1;
        arr1.push_back(temp1);
    }
    cout<<"enter the no of elements of array2"<<endl;
    cin>>n;
    cout<<"enter the elements of array2"<<endl;
    for(int i=0;i<n;i++){
        cin>>temp2;
        arr2.push_back(temp2);
    }
    vector<int>res=intersectionOfArrays(arr1,arr2,m,n);
    cout<<"The union of the two entered arrays:"<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}