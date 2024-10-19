#include <iostream>
using namespace std;

int playGame(int n, int a[]) {
    int turn = 0;  // Turtle starts first, turn = 0 means Turtle's turn
    for (int i = 1; i < n; i++) {
        if (turn == 0) {
            a[0] = max(a[0], a[1]);  // Turtle maximizes a[0]
        } else {
            a[0] = min(a[0], a[1]);  // Piggy minimizes a[0]
        }
        // Remove a[1] by shifting all elements to the left
        for (int j = 1; j < n - i; j++) {
            a[j] = a[j + 1];
        }
        turn = 1 - turn;  // Alternate between Turtle (0) and Piggy (1)
    }
    return a[0];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[100000];  // Maximum possible array size
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << playGame(n, a) << endl;
    }

    return 0;
}
