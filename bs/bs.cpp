#include<iostream>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5,6};
  int size = 6;
  int low = 0;
  int high = size-1;
  int target = 3;
  int mid;
  while (low < high){
      mid = (high+low)/2;
      if (arr[mid]==target) {
        cout << mid;
        break;
      }
      else if(arr[mid]<target){
        low = mid+1;
      }
      else {
        high = mid-1;
      }
  }
}

