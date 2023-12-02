// Given an integer number n, return the difference between the product of its digits and the sum of its digits.

// Example 1:

// Input: n = 234 
// Output: 15
// Explanation: Product of digits = 2 * 3 * 4 = 24 

// Sum of digits = 2 + 3 + 4 = 9 

// Result = 24 - 9 = 15
// Constraints:

// 1 <= n <= 10^5

//my code
#include <iostream>
using namespace std;

int difference(int n){
  int sum=0;
  int product = 1;
  int digit;
  while(n!=0){
    digit=n%10;
    sum=sum+digit;
    product=product*digit;
    n=n/10;
  }
  int res = product-sum;
  return res;
}
int main(){
  cout<<"Enter the number: "<<endl;
  int n;
  cin>>n;
  int result =difference(n);
  cout<<"Difference between product and sum is:"<<endl;
  cout<<result;
}

//platform code
// class Solution {
// public:
// 	int subtractProductAndSum(int n) {
//         int sum = 0;
//         int prod=1;
        
//         while(n!=0){
//             int last_digit=n%10;
//             sum=sum+last_digit;
//             prod=prod*last_digit;
//             n=n/10;
//         }
//         return prod-sum;
// 	}
// };