
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> orders;

    // Store 5 customer order numbers
    cout << "Enter 5 customer order numbers:\n";

    for (int i = 0; i < 5; i++) {
        int orderNumber;
        cin >> orderNumber;
        orders.push(orderNumber);
    }

    // Process orders in the order received
    cout << "\nProcessing customer orders:\n";

    while (!orders.empty()) {
        cout << "Processing order: " << orders.front() << endl;
        orders.pop();
    }

    return 0;
}
