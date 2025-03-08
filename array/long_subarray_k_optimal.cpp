#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int arr[]={1,1,0,1,2,3,1,1,1,2,0};
  int k = 4;
  int n = sizeof(arr)/sizeof(arr[0]);
  int l = 0;
  int sum=arr[0];
  int left=0;
  int right=0;
  while(right<n){
    while(left<=right && sum>k){
      sum-=arr[left];
      left++;
    }
    if(sum==k){
      l=max(l,right-left+1);
    }
    right++;
    sum+=arr[right];
  }
  cout<<l<<endl;
}
