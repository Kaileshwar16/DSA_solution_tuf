#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
  vector<int> arr;
  arr = {3,4,5,1,2};
  int low = 0;
  int high = arr.size()-1;
  int mid;
  int mini = INT_MAX;
  while (low <= high) {
  if (arr[low] <= arr[high]) {
      mini = min(mini, arr[low]);
      break;
    }
    mid = (low+high)/2;
    //left sorted
    if (arr[low]<=arr[mid]) {
      mini = min(mini,arr[low]);
      low = mid+1;
    }
    else {
      mini = min(mini,arr[mid]);
      high = mid-1;
    }
  }
  cout << mini <<endl; 
}
