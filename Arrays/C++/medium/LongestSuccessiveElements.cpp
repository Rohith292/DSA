#include<bits/stdc++.h>
using namespace std;

int lse(vector<int>arr,int n){
    unordered_set<int>st;
    if(arr.size()==0){
        return 0;
    }
    int maximumLength=INT_MIN;
    int count=0;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int x=it;
            count=1;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                count+=1;
            }
            maximumLength=max(maximumLength,count);
        }
    }
    return maximumLength;
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
    int res=lse(arr,n);
    cout<<"The length of the longest consecutive elements in the given array -> "<<res<<endl;
    return 0;
}