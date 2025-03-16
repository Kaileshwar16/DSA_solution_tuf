#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int m=3,n=3;
  int arr[m][n]={{1,2,3},{4,5,6},{7,8,9}};
  
  for(int i=0;i<m;i++){
    for(int j=i+1;j<n;j++){
      swap(arr[i][j],arr[j][i]);
    }
  }
  for(int i=0;i<m;i++){
    reverse(arr[i],arr[i]+n);
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<endl;  
    }
  }

}
