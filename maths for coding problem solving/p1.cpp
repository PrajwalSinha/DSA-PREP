// Missing Number
// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

// Example 1:

// Input: nums = [3,0,1] 
// Output: 2
// Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
// Example 2:

// Input: nums = [0,1] 
// Output: 2
// Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
// Example 3:

// Input: nums = [9,6,4,2,3,5,7,0,1] 
// Output: 8
// Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
// Constraints:

// n == nums.length
// 1 <= n <= 10^4
// 0 <= nums[i] <= n
// All the numbers of nums are unique.
#include <iostream>
using namespace std;

int missing(int n,int arr[]){
  int sum = 0;
  int sum_arr=0;
  for(int i=1;i<=n;i++){
    sum=sum+i;
  }
  for(int i=0;i<n;i++){
    sum_arr=sum_arr+arr[i];
  }
  int res = sum-sum_arr;
  return res;
}
int main(){
  cout<<"Enter Number: "<<endl;
  int n;
  cin>>n;
  int arr[n];
  cout<<"Enter elements in array: "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int result = missing(n,arr);
  cout<<"Missing number is: "<<endl;
  cout<<result<<endl;
}