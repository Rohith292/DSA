#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> moveZeros(vector<int>& arr, int n){
            int j=0;
            for(int i=0;i<n;i++){
                if(arr[i]!=0){
                    swap(arr,i,j);
                    j++;
                }
            }
            return arr;
        }
    private:
        static void swap(vector<int>& arr, int i,int j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
};

int main(){
    cout<<"enter the length of the array:"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array(with zeros):"<<endl;
    vector<int>arr;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    Solution s;
    vector<int>res=s.moveZeros(arr,n);
    cout<<"The array after moving all zeroes to the end"<<endl;
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}