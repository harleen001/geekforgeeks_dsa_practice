#include <iostream>
using namespace std;

int main() {
    int arr[4] = {2, 7, 11, 15};
    int target = 9;

    int i = 0; // Pointer at the beginning of the array
    int j = 3; // Pointer at the end of the array

    while (i < j) {
        if (arr[i] + arr[j] == target) {
            cout << "Indices are: " << i << " " << j << endl;
            break;
        } else if (arr[i] + arr[j] > target) {
            j--; // Decrease j to try a smaller number
        } else {
            i++; // Increase i to try a larger number
        }
    }

    return 0;
}
