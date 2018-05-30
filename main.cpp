#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    string s;

    cin >> n;
    // cout << n;
    cin >> s;
    // cout << s;

    int k = 0;
    int counter = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'D') {
            --k;
        }
        if (s[i] == 'U') {
            ++k;
            if (k == 0) {
                ++counter;
            }
        }
    }
    cout << counter;

    return 0;
}