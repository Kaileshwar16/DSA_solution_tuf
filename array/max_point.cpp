#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int arr[] = {2,3,6,1,0,2,6,2};
  int k = 4;
  int lsum = 0;
  int rsum =0;
  int maxsum=0;
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<k;i++){
    lsum+=arr[i];
  }
  maxsum=lsum;
  int rightindex = n-1;
  for(int j=k-1;j>1;j--){
    rsum+=arr[rightindex];
    rightindex--;
    lsum-=arr[j];
    maxsum=max(lsum+rsum,maxsum);
  }
  cout<<maxsum<<endl;
}
