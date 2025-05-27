#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n1 = 12;
  int n2 = 9;
  int hcf,gcf = 0;
  for(int i = 1; i < min(n1,n2); i++)
  {
    if(n1 % i == 0 && n2 % i == 0)
    {
      hcf = i;
    }
  }
  cout << hcf;
}
