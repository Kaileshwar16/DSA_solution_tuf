//rotating the element to it size will result in the same array
//  d%(size_of_array) = no.of.times you need to rotate

#include<iostream>

using namespace std;

int main(){
  int arr[] = {1,2,3,4,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  int d = 3;
  int rotation = d%n;
  int temp[d];
  //storing rotation array
  for(int i=0;i<d;i++){
    temp[i] = arr[i];
  }
  //shifting
  for(int i = d;i<n;i++){
    arr[i-d] = arr[i];
  }
  //merging temp with shifted array
  int j=0;//(n-d) can also be used
  for(int i = n-d;i<n;i++){
    arr[i] = temp[j++];
    
  }
  for(int num:arr){
    cout<<num<<endl;
  }

}
//time complexity O(n+d)
//extra space = O(d)

