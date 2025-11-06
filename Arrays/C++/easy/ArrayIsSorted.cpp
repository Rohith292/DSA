#include <iostream>
#include<vector>
using namespace std;

bool isSorted(const vector<int> arr, int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i]){

        }else{
            return false;
        }
    }
    return true;
}
int main(){
    int n,temp;
    vector<int>arr;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    if(isSorted(arr,n)){
        cout<<"the given array is sorted"<<endl;
    }else{
        cout<<"the given array is not sorted"<<endl;
    }
    return 0;
}