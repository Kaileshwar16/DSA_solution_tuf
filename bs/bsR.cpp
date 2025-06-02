#include<iostream>
using namespace std;

int func(int low, int high, int arr[], int target) {
    if (low > high) {
        return -1; 
    }
    int mid = (low + high) / 2;
    if (arr[mid] == target) {
        return mid;
    }
    else if (arr[mid] < target) {
        return func(mid + 1, high, arr, target);
    }
    else {
        return func(low, mid - 1, arr, target);
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int low = 0;
    int high = size - 1;
    int target = 3;
    int result = func(low, high, arr, target);
    cout<<result;
    return 0;
}
