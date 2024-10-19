#include <iostream>
using namespace std;

int minGasTank(int n, int x, int a[]) {
    int maxDist = max(a[0], x - a[n - 1]);  // max distance between start and first station, or last station and x
    for (int i = 1; i < n; i++) {
        maxDist = max(maxDist, a[i] - a[i - 1]);  // max distance between consecutive stations
    }
    return maxDist;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;

        int a[50];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << minGasTank(n, x, a) << endl;
    }

    return 0;
}
