#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0, r = 0, k = 2, lsub = 0, curr = 0;

    while (l <= r && r < n) {
        if (curr <= k) {
            if (arr[r] == 0) {
                curr++;
            }
            if (curr <= k) { 
                lsub = max(lsub, r - l + 1);
            }
            r++;
        } else {
            while (arr[l] != 0) {
                l++;
            }
            l++;
            curr--;
        }
    }

    cout << lsub << endl;
    return 0;
}
