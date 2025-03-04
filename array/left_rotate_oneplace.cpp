#include<iostream>

using namespace std;

int main(){
  int array[] = {1,2,3,4,5};
  int L = array[0];
  int n = sizeof(array)/sizeof(array[0]);
  for(int i = 1;i<n;i++){
    array[i-1] = array[i];
  }
  array[n-1] = L;
  for(int num:array){
    cout<<num<<endl;
  }
}

//time complexity   O(n)
//extra space used O(1)

