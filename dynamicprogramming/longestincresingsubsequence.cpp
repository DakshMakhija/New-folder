

// Find the length of the longest subsequence in a given array A of integers such that all elements of the subsequence are sorted in strictly ascending order.

// Input Format
// The first line contains a single integer n.
// Next line contains n space separated numbers denoting the elements of the array.

// Constraints
// 0 < n< 105
// 0 < Ai < 105

// Output Format
// Print a single line containing a single integer denoting the length of the longest increasing subsequence.

// Sample Input
// 6
// 50 3 10 7 40 80
// Sample Output
// 4
// Explanation
// The longest subsequence in test case is - 3,7,40,80


#include<bits/stdc++.h>
using namespace std;

int lIS(int arr[], int n) {
  int sol[n];

  sol[0] = 1;
  for (int i = 1; i < n; i++) {
    sol[i] = 1;
    for (int j = 0; j < i; j++)
      if (arr[i] > arr[j] && sol[i] < sol[j] + 1)
        sol[i] = sol[j] + 1;
  }

  return *max_element(sol, sol + n);
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout << lIS(arr, n);
	return 0;
}