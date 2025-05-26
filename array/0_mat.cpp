#include<iostream>
using namespace std;
int main(){
  int m,n=3,3;
  int q[m][n] = {{1,2,3},{4,5,6},{7,8,9}};
  int row[m] = {0};
  int col[n] = {0};

  for(int i = 0; i < n; i++){
    for(int j = 0; j<m; j++){
    if(q[i][j] == 0){
      row[i] = 1;
      col[j] = 1;
    }
  }
}
for (int i =0; i<n; i++){
  for (int j = 0; j = m; j++){
    if (row[i] || col[j]){
      q[i][j] = 0;
    }
  }
}


}
