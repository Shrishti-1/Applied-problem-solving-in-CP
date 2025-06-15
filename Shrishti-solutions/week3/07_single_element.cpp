#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(const vector<int>& nums) {
    int low = 0, high = nums.size() - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (mid % 2 == 1) mid--; 
        if (nums[mid] == nums[mid + 1]) {
            low = mid + 2;
        } else {
            high = mid;
        }
    }
    return nums[low];
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the sorted array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = singleNonDuplicate(nums);
    cout << result << endl;

    return 0;
}