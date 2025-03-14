#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
  unordered_map<char,int>mp;
  string q ="abcdabbcdeef";
  int l=0;
  int r=0;
  int maxl = 0;
  string str ="";
  while(r<q.length()){
    if(mp.find(q[r])!=mp.end()){
      mp.erase(q[l]);
      l++;
    }
    else{
      mp[q[r]]=1;
      r++;
    }
  }
  cout << maxl<<endl;
  return 0;
}
