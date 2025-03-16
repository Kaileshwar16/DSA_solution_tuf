#include<iostream>
using namespace std;

int main(){
  int n=3,m=3;
  int arr[m][n] = {{1,1,0},{1,1,1},{0,1,1}};
  int mr[m]={0};
  int mc[n]={0};
  
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(arr[i][j]==0){
        mr[i]=1;
        mc[j]=1;
      }
    }
  }

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(mr[i]==1 || mr[j]==1){
        arr[i][j]=0;
      }  
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    cout<<arr[i][j]<<endl;
    }
  }


  return 0;
}
