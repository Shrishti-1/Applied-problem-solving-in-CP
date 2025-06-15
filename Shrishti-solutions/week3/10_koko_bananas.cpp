#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canFinish(const vector<int>& piles, int h, int k) {
    int hours = 0;
    for (int bananas : piles) {
        hours += (bananas + k - 1) / k; 
    }
    return hours <= h;
}

int minEatingSpeed(const vector<int>& piles, int h) {
    int low = 1;
    int high = *max_element(piles.begin(), piles.end());
    int answer = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (canFinish(piles, h, mid)) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return answer;
}

int main() {
    int n, h;
    cout << "Enter number of piles: ";
    cin >> n;
    vector<int> piles(n);

    cout << "Enter piles: ";
    for (int i = 0; i < n; ++i) {
        cin >> piles[i];
    }

    cout << "Enter number of hours: ";
    cin >> h;

    int result = minEatingSpeed(piles, h);
    cout << "Minimum eating speed: " << result << endl;

    return 0;
}
