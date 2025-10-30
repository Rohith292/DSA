#include<iostream>
#include<vector>

using namespace std;

class Largest{
    public:
        int largest(const vector<int>arr,int n){
            int max=arr[0];
            for(int i=1;i<n;i++){
                if(arr[i]>max){
                    max=arr[i];
                }
            }
            return max;
        }
};
int main(){
    vector<int>arr;
    int n,temp;
    cout<<"Enter the no of elements in array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    Largest l;
    int r=l.largest(arr,n);
    cout<<"the largest element is -> "<<r<<endl;
    return 0;
}