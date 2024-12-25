#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int migratoryBirds(vector<int> arr) {
    unordered_map<int, int> birdCounts;
    int maxCount = 0;
    int minId = 1; 

    for (int birdId : arr) {
        birdCounts[birdId]++; 
        if (birdCounts[birdId] > maxCount) {
            maxCount = birdCounts[birdId];
            minId = birdId; 
        } else if (birdCounts[birdId] == maxCount && birdId < minId) {
            minId = birdId; 
        }
    }

    return minId;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = migratoryBirds(arr);
    cout << result << endl;

    return 0;
}
