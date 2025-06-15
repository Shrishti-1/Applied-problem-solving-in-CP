#include<iostream>
using namespace std;

int countRotations(const vector<int>& arr) {
    int min_idx = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements of the rotated sorted array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int rotations = countRotations(arr);
    cout << rotations << endl;
    return 0;
}