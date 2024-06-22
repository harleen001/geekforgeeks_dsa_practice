#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    int arr[n] = {1, 2, 4, 5}; 
    int x = 3; 
    int pos = 2; 

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }

    if (count == n) {
        cout << "There is no more space in the array." << endl;
        return 0; 
    }

    for (int i = n - 1; i > pos; i--) {
        arr[i] = arr[i - 1]; //displaced the element by back ++
    }
  
    arr[pos] = x;

    cout << "Updated array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
