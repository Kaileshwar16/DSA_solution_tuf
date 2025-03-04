#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int arr[] = {1,0,0,2,3,4,0,0,1};
  int n = sizeof(arr)/sizeof(arr[n]);
  int j = 0;
  for(int i = 0 ; i<n;i++){
    if(arr[i]==0){
      j=i;
      break;
    }
  }

  for(int i =j+1;i<n;i++){
    if(arr[i]!=0){
      swap(arr[i],arr[j]);
      j++;
    }

  }

  for(int num:arr){
    cout<<num<<endl;
  }
}
