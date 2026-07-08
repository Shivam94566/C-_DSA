#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {2,5,8,12,16,23,38,56,72};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if(result == -1)
        cout << "Element Not Found";
    else
        cout << "Element Found at Index " << result;

    return 0;
}



//time complexity: O(log n)
// 32-16-8-4-2-1 total step 6
// 32=2^5, so 5 steps needed for 32 elements