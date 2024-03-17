#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int countValidIntegers(int n, vector<pair<int, int>>& constraints) {
    int lower_bound = INT_MIN;
    int upper_bound = INT_MAX;
    int not_equal = 0;
    bool initial_range_set = false;

    for (int i = 0; i < n; ++i) {
        int a = constraints[i].first;
        int x = constraints[i].second;

        if (!initial_range_set) {
            // Set the initial range based on the first constraint
            if (a == 1) {
                lower_bound = x;
            } else if (a == 2) {
                upper_bound = x;
            } else {
                // If the first constraint is of type 3 and not in the initial range, set not_equal to 1
                not_equal = 1;
            }

            initial_range_set = true;
        } else {
            if (a == 1) {
                lower_bound = max(lower_bound, x);
            } else if (a == 2) {
                upper_bound = min(upper_bound, x);
            } else if (a == 3 && x >= lower_bound && x <= upper_bound) {
                // If the constraint is of type 3 and x falls within the valid range
                not_equal = max(not_equal, x - lower_bound);
            }

            // If after updating the range, lower_bound becomes greater than upper_bound, set count to 0
            if (lower_bound > upper_bound) {
                return 0;
            }
        }
    }

    // Calculate the number of integers in the valid range and subtract not_equal
    int count = max(0, upper_bound - lower_bound + 1) - not_equal;
    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> constraints(n);
        for (int i = 0; i < n; ++i) {
            cin >> constraints[i].first >> constraints[i].second;
        }

        int result = countValidIntegers(n, constraints);
        cout << result << endl;
    }

    return 0;
}
