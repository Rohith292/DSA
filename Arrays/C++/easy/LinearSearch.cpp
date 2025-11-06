#include<iostream>
#include<vector>

using namespace std;

 int linearSearch(vector<int>arr,int n, int ele){
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            return i;
        }
    }
    return -1;
}

int main(){
    cout<<"enter the length of the array:"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    vector<int>arr;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"enter the element to be found?"<<endl;
    int ele;
    cin>>ele;
    cout<<"The element is found at the index ->"<<linearSearch(arr,n,ele)<<endl;
    return 0;
}