#include <iostream>
using namespace std; 

int main() {
    int n;
    cin >> n;

    int arr[100];

    // input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Shell Sort (descending)
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;

            while (j >= gap && arr[j - gap] < temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }

    // output (important: space after every element)
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
  

    
    return 0;
}    

