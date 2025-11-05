#include<bits/stdc++.h>
using namespace std;
#include<map>

int majorityElement(vector<int>arr, int n){
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        if(it.second>arr.size()/2){
            return it.first;
        }
    }
    return -1;
}

int main(){
    cout<<"enter the length of the array:"<<endl;
    int n;
    cin>>n;
    cout<<"enter the elements of the array:"<<endl;
    vector<int>arr;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    int res=majorityElement(arr,n);
    if(res==-1){
        cout<<"No majority element exists that is greater than n/2"<<endl;

    }else{
        cout<<"the majority element that is greater than n/2->"<<res<<endl;
    }

    return 0;
}