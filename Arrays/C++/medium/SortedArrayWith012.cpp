#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr, int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
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
    sortArray(arr,n);
    cout<<"the sorted array is as follows"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}