#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
        vector<int> leftRotateArray(vector<int>& arr, int n, int d){
            d=d%n;
            reverse(arr.begin(),arr.begin()+d);
            reverse(arr.begin()+d,arr.end());
            reverse(arr.begin(),arr.end());

            return arr;
        }
};
int main(){
    cout<<"enter the length of the sorted array:"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the sorted array:"<<endl;
    vector<int>arr;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Enter the no of positions you want to rotate?"<<endl;
    int d;
    cin>>d;
    Solution s;
    vector<int>res=s.leftRotateArray(arr,n,d);
    cout<<"The left rotated array by"<<d<<"places"<<endl;
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;

}