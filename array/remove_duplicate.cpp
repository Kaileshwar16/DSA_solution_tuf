#include<iostream>
#include<set>
using namespace std;

int main()
{ int array[]={1,1,2,3,4,4,5};
  set<int> mySet;
  int n = sizeof(array)/sizeof(array[0]);
  for(int i = 0;i<n;i++){
    mySet.insert(array[i]);
  }
  for(int num:mySet){
    cout<<num<<endl;
  }
  return 0;
}
