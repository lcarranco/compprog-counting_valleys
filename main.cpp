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
    return sum;
}

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
    // for (vector<int>::iterator it = steps.begin(); it != steps.end(); ++it) {
    //     cout << *it << ' ';
    // }

    int left = 0;
    int right = 0;
    vector<int> indices;
    vector<int> sums;
    find_all(steps, indices);
    sums.push_back(sum_between(left, right, steps));

    return 0;
}