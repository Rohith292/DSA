#include <iostream>
#include <vector>
#include <climits> // For INT_MIN and INT_MAX


int sLargest(const std::vector<int>& arr) {
    int n = arr.size();
    if (n < 2) {
        return -1; // Not enough elements
    }

    int largest = arr[0];
    int sLargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            sLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > sLargest) {
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int sSmallest(const std::vector<int>& arr) {
    int n = arr.size();
    if (n < 2) {
        return -1; // Not enough elements
    }

    int smallest = arr[0];
    int sSmallest = INT_MAX; 

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            sSmallest = smallest;
            smallest = arr[i];
        }
        
        else if (arr[i] != smallest && arr[i] < sSmallest) {
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}

int main() {
    
    std::vector<int> arr = {1, 4, 2, 13, 13, 8, 7, 7};
    
   
    std::cout << "The second largest element is: " << sLargest(arr) << std::endl;
    std::cout << "The second smallest element is: " << sSmallest(arr) << std::endl;

    return 0; 
}