#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[low] <= nums[mid]) {
            
            if (nums[low] <= target && target < nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        } else {
            
            if (nums[mid] < target && target <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1; 
    }

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements of the rotated sorted array:\n";
    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    cout << "Enter the target element: ";
    cin >> target;

    int index = search(nums, target);
    if (index != -1)
        cout <<  index << "\n";
    else
        cout << -1;

    return 0;
}
