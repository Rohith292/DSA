#include<bits/stdc++.h>
using namespace std;

vector<int> arrangeArray(vector<int> nums, int n){
    vector<int>res(n);
    int posIndex=0,negIndex=1;

    for(int i=0;i<n;i++){
        if(nums[i]<0){
            res[negIndex]=nums[i];
            negIndex+=2;
        }else{
            res[posIndex]=nums[i];
            posIndex+=2;
        }
    }
    return res;
}
int main(){
    cout<<"enter the length of the sorted array:"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array with equal n/2 elements:"<<endl;
    vector<int>arr;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    vector<int>res=arrangeArray(arr,n);
    cout<<"The array reaarnages with alternating signs is as follows-> "<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}