#include<bits/stdc++.h>
using namespace std;

int main(){
  string s="TUF is great for interview preparation";
  cout<<"Before reversing words: "<<endl;
  cout<<s<<endl;
  s+=" ";
  string str="";
  stack<string> st;
  int i;
  for(i=0;i<s.length();i++){
    if(s[i]==' '){
      st.push(str);
      str="";
    }
    else{
      str+=s[i];
    }
  }
  string ans="";
  while(st.size()!=1){
      ans+=st.top()+" ";
      st.pop();
  }
  ans+=st.top();
    cout<<"After reversing words: "<<endl;
    cout<<ans;
    return 0;
}


