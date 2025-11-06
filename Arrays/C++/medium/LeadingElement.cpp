#include <bits/stdc++.h>
using namespace std;

vector<int> leadingElement(vector<int> nums, int n){
    vector<int>res;
    int last=nums[n-1];
    res.push_back(last);

    for(int i=n-2;i>=0;i--){
        if(nums[i]>last){
            res.push_back(nums[i]);
            last=nums[i];
        }
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    vector<int> arr;
    int n, temp;
    cout << "Enter the number of elements in array:" << endl;
    cin >> n;
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    vector<int>ans=leadingElement(arr,n);
    cout<<"The leading elements in the given array are ->"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}