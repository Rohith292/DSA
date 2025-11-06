#include<bits/stdc++.h>
using namespace std;
#include<string>
string twoSum(vector<int>& arr, int n, int target){
   
    int left=0,right=n-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            return "Yes";
        }
        else if(sum<target){
            left++;
        }else right--;
    }
    return "NO";
}
int main(){
    cout<<"enter the length of the array:"<<endl;
    int n;
    cin>>n;
    cout<<"enter"<<n-1<< " elements of the array:"<<endl;
    vector<int>arr;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Enter the target sum to be found out"<<endl;
    int target;
    cin>>target;
    string res=twoSum(arr,n,target);
    cout<<"does the array contain two numbers whose result is equal to "<<target<<"?"<<endl;
    cout<<"The answer is ->"<<res;

    return 0;
}