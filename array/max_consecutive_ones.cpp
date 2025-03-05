#include<iostream>
using namespace std;

int main(){
  int arr[]={0,0,1,1,1,0,1,1,0,0,1};
  int cnt=0;
  int n = sizeof(arr)/sizeof(arr[0]);
  int maxi=0;
  for(int i=0;i<n;i++){
    if(arr[i]==1){
      cnt++;
      maxi = max(cnt,maxi);
    }
    else{
      cnt=0;
    }
  }
  cout<<maxi<<endl;
}
