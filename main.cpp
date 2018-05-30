#include <iostream>
#include <vector>

using namespace std;

void find_all(vector<int> steps, vector<int> & indices) {
    // cout << steps.size();
    for (int i = 0; i < steps.size(); ++i) {
        if (steps[i] == 0) {
            indices.push_back(i);
            // cout << i << ' ';
        }
    }
}

int sum_between(int left, int right, vector<int> steps) {
    int sum = 0;
    for (int i = left + 1; i < right; ++i) {
        sum += steps[i];
    }
    // cout << sum << endl;
    return sum;
}

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