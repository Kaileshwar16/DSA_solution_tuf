#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int arr[] ={12,6,7,3,1,4,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  int ans[n];
  int maxe=-10000;
  int j=0;
  for(int i=n-1; i>=0; i--){
    if(arr[i]>maxe){
      ans[j]=arr[i];
      maxe=arr[i];
    j++;}
  }
  for(int i=0;i<j;i++){
    cout<<ans[i]<<endl;
  }
  return 0;
}
