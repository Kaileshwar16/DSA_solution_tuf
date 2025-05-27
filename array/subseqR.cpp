#include<bits/stdc++.h>
using namespace std;

void seq(int arr[], int n, vector<int> &des, int ind){
  if(ind>=n){
    for(auto it : des){
      cout<<it<<" ";
    }
    cout<<endl;
    return;
  }
  des.push_back(arr[ind]);
  seq(arr,n,des,ind+1);
  des.pop_back();
  seq(arr,n,des,ind+1);

  
}
int main(){
  int arr[] = {3,1,2};
  int n = 3;
  vector<int> des;

  seq(arr,n,des,0);
  

}
