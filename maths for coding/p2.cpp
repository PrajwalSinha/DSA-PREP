// Minimum Sum of Four Digit Number After Splitting Digits

// You are given a positive integer num consisting of exactly four digits. Split num into two new integers new1 and new2 by using the digits found in num. Leading zeros are allowed in new1 and new2, and all the digits found in num must be used.

// For example, given num = 2932, you have the following digits: two 2's, one 9 and one 3. Some of the possible pairs [new1, new2] are [22, 93], [23, 92], [223, 9] and [2, 329].
// Return the minimum possible sum of new1 and new2

// Example 1:

// Input: num = 2932 
// Output: 52
// Explanation: Some possible pairs [new1, new2] are [29, 23], [223, 9], etc.

// The minimum sum can be obtained by the pair [29, 23]: 29 + 23 = 52.
// Example 2:

// Input: num = 4009 
// Output: 13
// Explanation: Some possible pairs [new1, new2] are [0, 49], [490, 0], etc. 

// The minimum sum can be obtained by the pair [4, 9]: 4 + 9 = 13.

// Constraints:

// 1000 <= num <= 9999
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int split(int n){
  vector<int> result;
  while(n!=0){
    int digit = n%10;
    result.push_back(digit);
    n=n/10;
  }
  sort(result.begin(),result.end());
  int res1 = result.at(0)*10+result.at(2);
	int res2 = result.at(1)*10+result.at(3);
	int final = res1+res2;
	return final;
}
int main(){
    cout<<"Enter your four digit number: "<<endl;
    int n;
    cin>>n;
    int res = split(n);
    cout<<res<<endl;
}

//platform code
// class Solution {
// public:
// 	int minimumSum(int num) {
// 		vector<int> result;
// 		int digit;
// 		while(num!=0){
// 			digit=num%10;
// 			result.push_back(digit);
// 			num=num/10;
// 		}
// 		sort(result.begin(),result.end());
// 		int res1 = result.at(0)*10+result.at(2);
// 		int res2 = result.at(1)*10+result.at(3);
// 		int final = res1+res2;
// 		return final;
// 	}
// };