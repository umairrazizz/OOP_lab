/*
Write a program to find all subsets of an array whose sum equals a given target value.
• Input: Array of integers and a target sum.
• Output: All subsets (in any order) that sum up to the target.
For example:
Input: [2, 3, 5], Target = 5
Output: [2, 3] and [5]
*/
#include <iostream>
#include <vector>
using namespace std;

void findSubsets(vector<int>& arr, int n, int target) {
    for (int i = 0; i < (1 << n); ++i) {
        int sum = 0;
        vector<int> subset;

        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(arr[j]);
                sum += arr[j];
            }
        }

        if (sum == target) {
            cout << "[";
            for (int k = 0; k < subset.size(); ++k) {
                cout << subset[k];
                if (k != subset.size() - 1) cout << ", ";
            }
            cout << "]" << endl;
        }
    }
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    cout << "Subsets whose sum is " << target << " are:\n";
    findSubsets(arr, n, target);

    return 0;
}
