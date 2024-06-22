#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int x = 2;

    int left = 0, right = n - 1;
    int mid;

    while (left <= right) {
        mid = left + (right - left) / 2; 

        if (arr[mid] == x) {
            cout << "Element found at position " << mid << endl;
            return 0; 
        } else if (arr[mid] < x) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    cout << "Element not found" << endl;
    return -1; 
}
