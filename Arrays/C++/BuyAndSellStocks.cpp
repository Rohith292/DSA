#include<bits/stdc++.h>
using namespace std;

int maxProfitGained(vector<int> prices){
    int profit=0;
    int mini=prices[0];
    for(int i=1;i<prices.size();i++){
        int sum=prices[i]-mini;
        profit=max(profit,sum);
        mini=min(mini,prices[i]);
    }
    return profit;
}
int main(){
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfitGained(arr);
    cout << "Max profit is: " << maxPro << endl;
    return 0;
}