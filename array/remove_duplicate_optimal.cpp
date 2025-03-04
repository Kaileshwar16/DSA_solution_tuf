#include<iostream>

using namespace std;

int main(){
  int array[] = {1,2,2,3,4,4};
  int j=0;
  int n = sizeof(array)/sizeof(array[0]);
  for(int i = 1;i<n;i++){
    if(array[i]!=array[j]){
      array[j+1] = array[i];
      j++;}
  }
  cout<< j+1<<endl;
}
