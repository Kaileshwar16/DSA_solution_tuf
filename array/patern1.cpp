#include<iostream>
using namespace std;

void patern1(int x)
{
  for (int i = 1; i <= x; i++)
  {
    for(int j = x-i+1; j<=0; j -- ){
      cout<<"* ";
    }
    cout<<"\n";
  }
}

int main(){
  patern1(4);

}
