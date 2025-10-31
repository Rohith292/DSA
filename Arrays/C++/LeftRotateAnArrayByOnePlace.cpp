#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> sortedArray(vector<int>& arr, int n){
            int temp=arr[0];
            for(int i=1;i<n;i++){
                arr[i-1]=arr[i];
            }
            arr[n-1]=temp;
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
    Solution s;
    vector<int>result=s.sortedArray(arr,n);
    cout<<"The sorted array is as follows"<<endl;
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}