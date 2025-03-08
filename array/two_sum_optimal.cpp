#include<iostream>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  int key = 13;
  int l=0;
  int r=n-1;
  while(l<r){
    if(arr[l]+arr[r] == key){
      cout<<"yes"<<endl;
      return 0;
    }
    else if(arr[l]+arr[r]<key){
      l++;
    }
    else{
      r--;
    }
  }
  cout<<"NO"<<endl;
}

