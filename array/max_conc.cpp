#include<iostream>
#include<algorithm>

using namespace std;
int main(){
  int arr[] = {1,1,1,2,2,3,3,4,5,100,101,102};
  int n=sizeof(arr)/sizeof(arr[0]);
  sort(arr,arr+n);
  int mlng=1;
  int cnt=0;
  int least=-100000;
  for(int i=0;i<n;i++){
    if(arr[i]-1 == least){
      cnt++;
      least=arr[i];
    }
    else if(arr[i] != least){
      cnt=1;
      least=arr[i];
    }
    mlng = max(mlng,cnt);
  }
  cout<<mlng<<endl;

}
