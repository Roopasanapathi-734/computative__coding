#include <iostream>
#include <vector>

using namespace std;

void bonAppetit(vector<int> bill, int k, int b) {
    int totalCost = 0;
    int n = bill.size();

    // Calculate total cost of all items
    for (int i = 0; i < n; i++) {
        totalCost += bill[i];
    }

    // Calculate Anna's actual share
    int actualShare = (totalCost - bill[k]) / 2;

    // Check if Brian charged Anna correctly
    if (actualShare == b) {
        cout << "Bon Appetit" << endl;
    } else {
        cout << b - actualShare << endl;
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> bill(n);
    for (int i = 0; i < n; i++) {
        cin >> bill[i];
    }

    int b;
    cin >> b;

    bonAppetit(bill, k, b);

    return 0;
}