#include <vector>
#include <iostream>
using namespace std;

int findMissing(vector<int>arr, int n){
    int predictedSum=(n*(n+1))/2;
    int actualSum=0;
    for(int i=0;i<arr.size();i++){
        actualSum+=arr[i];
    }

    int num=predictedSum-actualSum;

    return num;

}
int main(){
    cout<<"enter the length of the array:"<<endl;
    int n;
    cin>>n;
    cout<<"enter"<<n-1<< " elements of the array:"<<endl;
    vector<int>arr;
    int temp;
    for(int i=0;i<n-1;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    int val=findMissing(arr,n);
    cout<<"The missing number from the array is -> "<<val<<endl;

    return 0;

}