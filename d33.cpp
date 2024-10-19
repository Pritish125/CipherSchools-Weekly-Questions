#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[128] = {0}; // To store frequency of each character

    for (int i = 0; i < s.length(); i++) {
        freq[s[i]]++;
    }

    stack<char> st;
    for (int i = 0; i < 128; i++) {
        if (freq[i] > 0) {
            for (int j = 0; j < freq[i]; j++) {
                st.push(i);
            }
        }
    }

    string result;
    for (int i = 127; i >= 0; i--) {
        while (!st.empty() && st.top() == i) {
            result += st.top();
            st.pop();
        }
    }

    cout << result << endl;

    return 0;
}
