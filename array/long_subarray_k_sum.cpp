#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  int l=0;
  int arr[] = {1,1,1,1,0,2,3,1,1,1};
  int k = 4;
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++){
    int sum = 0;
    for(int j=i;j<n;j++){
      sum+=arr[j];
      if(sum==k){
        l=max(l,j-i+1);
      }
    }
  }
  cout<<l<<endl;
}
