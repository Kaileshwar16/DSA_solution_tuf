//optimal approach involves reversing the arrays thrice
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int arr[] = {1,2,3,4,5,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  int d = 9;
  int rotate = d%n;
  reverse(arr,arr+rotate);
  reverse(arr+rotate,arr+n);
  reverse(arr,arr+n);

  for(int num:arr){
    cout<<num<<endl;
  }
}
