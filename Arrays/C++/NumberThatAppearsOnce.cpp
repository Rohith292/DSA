#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> arr, int n){
    int xor1=0;
    for(int i=0;i<n;i++){
        xor1=xor1^arr[i];

    }
    return xor1;
}
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

    int res=getSingleElement(arr,n);
    cout<<"The element that appears once is -> "<<res<<endl;
    return 0;

}