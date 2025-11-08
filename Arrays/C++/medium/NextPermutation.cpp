#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int>& arr, int n){
    int index=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(arr.begin(),arr.end());
        return arr;
    }
    for(int i=n-1;i>index;i--){
        if(arr[i]>arr[index]){
            swap(arr[i],arr[index]);
            break;
        }
    }
    reverse(arr.begin()+index+1,arr.end());
    return arr;
}

int main(){
    int n,temp;
    cout<<"Enter the no of elements of array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of array:"<<endl;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    vector<int>res=nextPermutation(arr,n);
    cout<<"The next permutation for the given array is -> ";
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}