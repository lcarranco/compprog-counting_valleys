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

    vector<int> steps;
    steps.push_back(0);
    // for (vector<int>::iterator it = steps.begin(); it != steps.end(); ++it) {
    //     cout << *it;
    // }

    int k = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'D') {
            steps.push_back(--k);
        }
        if (s[i] == 'U') {
            steps.push_back(++k);
        }
    }
    for (vector<int>::iterator it = steps.begin(); it != steps.end(); ++it) {
        cout << *it << ' ';
    }

    

    return 0;
}