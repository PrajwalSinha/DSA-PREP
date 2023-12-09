//pivot number code bruteforce
#include <iostream>
using namespace std;

int pivot(int n){
  for(int curr_number=1;curr_number<=n;curr_number++){
    //right sum
    int right_sum=0;
    for(int i=1;i<=curr_number;i++){
      right_sum+=i;
    }
    int left_sum=0;
    for(int i=curr_number;i<=n;i++){
      left_sum+=i;
    }
    if(left_sum==right_sum){
      return curr_number;
    }
  }
  return -1;
}
int main(){
  cout<<"Enter the number: "<<endl; //it tells ki number kaha tak lena hai
  int n;
  cin>>n;
  int res=pivot(n);
  cout<<"Pivot Integer is: "<<res;
}