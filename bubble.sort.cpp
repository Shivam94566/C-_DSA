#include <iostream>
#include <vector>
#include <algorithm> // for std::swap

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    
    // Outer loop for each pass
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        
        // Inner loop to compare adjacent elements
        // The last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        // If no two elements were swapped by inner loop, then break
        if (!swapped)
            break;
    }
}

int main() {
    std::vector<int> data = {64, 34, 25, 12, 22, 11, 90};
    
    bubbleSort(data);
    
    std::cout << "Sorted array: ";
    for (int num : data) {
        std::cout << num << " ";
    }
    return 0;
}
