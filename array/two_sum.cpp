#include<iostream>
using namespace std;

int main(){
  int arr[] = {1,2,3,5,6,7,4};
  int key=11;
  int n = sizeof(arr)/sizeof(arr[0]);
  int flag=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr[i]+arr[j]==key){
        flag=1;
        cout<<i<<endl;
        cout<<j<<endl;
        return 0;
      }
    }
  }
  return 0;
}
