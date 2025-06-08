#include<iostream>
#include<vector>
using namespace std; 

int countFreq(vector<int> &arr, int target) {
    int res = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target)
            res++;
    }
    return res;
}

int main() {
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the number to count: ";
    cin >> target;

    int result = countFreq(arr, target);
    cout << "The number " << target << " appears " << result << " times.\n";

    return 0;
}