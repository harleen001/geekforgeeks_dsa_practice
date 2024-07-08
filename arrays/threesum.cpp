#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int target;
    cin >> target;

    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    sort(a.begin(), a.end());

    bool found = false;

    for (int i = 0; i < n - 2; ++i) {
        int lo = i + 1, hi = n - 1;

        while (lo < hi) {
            int current = a[i] + a[lo] + a[hi];

            if (current == target) {
                found = true;
                break; // Found the triplet, no need to search further
            }

            if (current < target) {
                lo++;
            } else {
                hi--;
            }
        }

        if (found) break; // No need to search further if found
    }

    if (found)
        cout << "True";
    else
        cout << "False";

    return 0;
}
