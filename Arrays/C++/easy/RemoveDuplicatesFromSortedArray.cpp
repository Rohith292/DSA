#include <iostream>
#include<vector>

int removeDuplicates(std::vector<int>& arr, int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]==arr[j]){

        }else{
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    std::vector<int> arr;
    int n,temp;
    std::cout<<"Enter the no of elements in array:"<<std::endl;
    std::cin>>n;

    std::cout<<"Enter the elements of array"<<std::endl;
    for(int i=0;i<n;i++){
        std::cin>>temp;
        arr.push_back(temp);
    }
    std::cout<<"the length of array after removing duplicates : "<<removeDuplicates(arr,n)<<std::endl;

    return 0;
}
