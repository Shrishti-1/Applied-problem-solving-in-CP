#include<iostream>
using namespace std;

int BinarySearch(const vector<int>& arr, int x){
    int min =0, max= arr.size()-1;

    while (min <= max) {
        int mid = min + (max - min) / 2;

        if (arr[mid] == x)
            return mid;  
        else if (arr[mid] < x)
            min = mid + 1;
        else
            max = mid - 1;
    }

    return -1;
}

int main() {
    int n, x;
    cout << "Enter size of array and the element to search:\n";
    cin >> n >> x;

    vector<int> arr(n);
    cout << "Enter the elements of the array:\n";
    for (int& num : arr)
        cin >> num;

    sort(arr.begin(), arr.end());

    int index = BinarySearch(arr, x);

    if (index != -1)
        cout << "Element found at index (0-based): " << index << "\n";
    else
        cout << "Element not found.\n";

    return 0;
}