#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> unionOfArrays(vector<int>& arr1, vector<int>& arr2, int m ,int n){
    set<int>st;
    for(int i=0;i<m;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<n;i++){
        st.insert(arr2[i]);
    }
    vector<int>temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
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
    vector<int>res=unionOfArrays(arr1,arr2,m,n);
    cout<<"The union of the two entered arrays:"<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}