#include<iostream>

using namespace std;

int main(){
  int arr[] = {1,2,4,5,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=1;i<n;i++){
    int flag=0;
    for(int j=0;j<n-1;j++){
      if(arr[j]==i){
        flag = 1;
        break;
      }

    }
    if(flag==0){
      cout<<i<<endl;
    }
  }
}
