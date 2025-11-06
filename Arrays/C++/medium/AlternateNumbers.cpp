#include <bits/stdc++.h>
using namespace std;

vector<int> alternateNumbers(vector<int>& nums, int n) {
    vector<int> pos, neg;

    // Separate positives and negatives
    for (int i = 0; i < n; i++) {
        if (nums[i] < 0)
            neg.push_back(nums[i]);
        else
            pos.push_back(nums[i]);
    }

    vector<int> result;
    int i = 0, j = 0;

    // Alternate until one list runs out
    while (i < pos.size() && j < neg.size()) {
        result.push_back(pos[i++]);
        result.push_back(neg[j++]);
    }

    // Append remaining positives
    while (i < pos.size()) {
        result.push_back(pos[i++]);
    }

    // Append remaining negatives
    while (j < neg.size()) {
        result.push_back(neg[j++]);
    }

    return result;
}

int main() {
    cout << "Enter the length of the array:" << endl;
    int n;
    cin >> n;

    cout << "Enter the elements of the array:" << endl;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> res = alternateNumbers(arr, n);

    cout << "The array rearranged with alternating signs is as follows ->" << endl;
    for (int num : res) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
