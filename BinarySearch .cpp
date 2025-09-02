#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)  
            return mid;

        else if (key < arr[mid]) 
            high = mid - 1;

        else 
            low = mid + 1;
    }
    return -1; 
}

int main() {
    int arr[] = {2, 5, 9, 12, 15, 19, 23};
    int n = 7, key = 19;

    int index = binarySearch(arr, n, key);

    if (index == -1)
        cout << "Not Found";
    else
        cout << "Found at index " << index;
}