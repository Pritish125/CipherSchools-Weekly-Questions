#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void generateParenthesis(int n) {
    vector<string> result;
    stack<pair<string, int>> s;
    s.push({"", 0});

    while (!s.empty()) {
        auto [current, closeCount] = s.top();
        s.pop();
        int openCount = n - closeCount;

        if (closeCount == n) {
            result.push_back(current);
            continue;
        }

        if (openCount > 0) {
            s.push({current + '(', closeCount});
        }

        if (closeCount < openCount) {
            s.push({current + ')', closeCount + 1});
        }
    }

    cout << "Valid combinations of parentheses: " << endl;
    for (const string& combination : result) {
        cout << combination << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of pairs of parentheses: ";
    cin >> n;
    generateParenthesis(n);
    return 0;
}
