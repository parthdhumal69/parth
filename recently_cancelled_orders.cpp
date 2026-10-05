#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> cancelledOrders;
    int orderNumber;

    // Store 5 cancelled orders
    cout << "Enter 5 cancelled order numbers:\n";

    for (int i = 0; i < 5; i++) {
        cin >> orderNumber;
        cancelledOrders.push(orderNumber);
    }

    // Display orders from most recently cancelled
    cout << "\nCancelled orders (most recent first):\n";

    while (!cancelledOrders.empty()) {
        cout << cancelledOrders.top() << endl;
        cancelledOrders.pop();
    }

    return 0;
}
