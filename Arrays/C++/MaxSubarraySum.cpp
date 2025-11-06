#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> arr, int n) {
    int maxi = INT_MIN;
    int sum = 0;
    int start = 0, ansStart = 0, ansEnd = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0) {
            sum = 0;
            start = i + 1;
        }
    }

    cout << "The subarray is ->" << endl;
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return maxi;
}

int main() {
    vector<int> arr;
    int n, temp;
    cout << "Enter the number of elements in array:" << endl;
    cin >> n;
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "The maximum subarray sum is: ";
    cout << maxSum(arr, n) << endl;

    return 0;
}
