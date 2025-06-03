#include <iostream>
#include <vector>
using namespace std;

int lower_bound(const vector<int>& a, int target) {
    int l = 0, r = a.size();
    while (l < r) {
        int m = l + (r - l) / 2;
        if (a[m] < target) l = m + 1;
        else r = m;
    }
    return l;
}

int upper_bound(const vector<int>& a, int target) {
    int l = 0, r = a.size();
    while (l < r) {
        int m = l + (r - l) / 2;
        if (a[m] <= target) l = m + 1;
        else r = m;
    }
    return l;
}

int main() {
    vector<int> a = {1, 2, 4, 4, 4, 7, 9};
    int x = 4;
    cout << lower_bound(a, x) << endl;
    cout << upper_bound(a, x) << endl;
}
