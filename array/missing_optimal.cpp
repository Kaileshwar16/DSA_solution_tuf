//missing elemeent using sum of natural number
#include<iostream>
using namespace std;
int main(){
  int arr[] = {1,2,4,5,6};
  int n = (sizeof(arr)/sizeof(arr[0]));
  int real_sum = (n*(n+1))/2;
  int question_sum = 0;

  for(int i=0;i<n-1;i++){
    question_sum+=arr[i];
  }
  int result = real_sum - question_sum;
  cout<<result<<endl;
}
