// Count the Digits That Divide a Number
// Given an integer num, return the number of digits in num that divide num.

// An integer val divides nums if nums % val == 0

// Example 1:

// Input: num = 121 
// Output: 2
// Explanation: 121 is divisible by 1, but not 2. Since 1 occurs twice as a digit, we return 2.
// Example 2:

// Input: num = 1248 
// Output: 4
// Explanation: 1248 is divisible by all of its digits, hence the answer is 4.
// Constraints:

// 1 <= num <=10^9 
// num does not contain 0 as one of its digits.
#include <iostream>
using namespace std;

int counting(int n){
  int temp=n;
  int count=0;
  while (temp>0)
  {
    /* code */
    int digit=temp%10;
    temp=temp/10;
    if(n%digit==0){
      count++;
    }
  }
  return count;
  
}
int main(){
  cout<<"Enter the number: "<<endl;
  int n;
  cin>>n;
  int result=counting(n);
  cout<<"The digits that divide a number: "<<endl;
  cout<<result;
}