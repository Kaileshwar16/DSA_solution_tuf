//brute
#include<iostream>
#include<set>
using namespace std;

int main(){
  int arr1[] = {1,2,3,1,4};
  int arr2[] = {1,2,6,7};
  set<int> mySet;
  int n1 = sizeof(arr1)/sizeof(arr1[0]);
  int n2 = sizeof(arr2)/sizeof(arr2[0]);

  for(int i = 0;i<n1;i++){
   mySet.insert(arr1[i]);
  }
  for(int i=0;i<n2;i++){
    mySet.insert(arr2[i]);
  }
  for(int num:mySet){
    cout<<num<<endl;
  }



}
