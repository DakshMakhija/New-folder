


// The stock span problem is a financial problem where we have a series of N daily price quotes for a stock and we need to calculate span of stock’s price for all N days. You are given an array of length N, where ith element of array denotes the price of a stock on ith. Find the span of stock's price on ith day, for every 1<=i<=N.
// A span of a stock's price on a given day, i, is the maximum number of consecutive days before the (i+1)th day, for which stock's price on these days is less than or equal to that on the ith day.

// Input Format
// First line contains integer N denoting size of the array.
// Next line contains N space separated integers denoting the elements of the array.

// Constraints
// 1 <= N <= 10^6

// Output Format
// Display the array containing stock span values.

// Sample Input
// 5
// 30
// 35
// 40
// 38
// 35
// Sample Output
// 1 2 3 1 1 END
// Explanation
// For the given case
// for day1 stock span =1
// for day2 stock span =2 (as 35>30 so both days are included in it)
// for day3 stock span =3 (as 40>35 so 2+1=3)
// for day4 stock span =1 (as 38<40 so only that day is included)
// for day5 stock span =1 (as 35<38 so only that day is included)
// hence output is 1 2 3 1 1 END











#include<iostream>
#include<stack>
using namespace std;
int main() {
	stack<long long int>s;
	long long int n;cin>>n;
	int t=n;
	int arr[n];
	int z=0;
	while(t--)
	{
		cin>>arr[z++];
	}z=0;
	if(n>1000000||n<1)return 0;
	long long int count=1;
	int ans[n]={};
	int m=-1;
	while(z<n)
	{	int curr=arr[z];
			 m=max(curr,m);
		if(curr<0)return 0;
		if(s.empty())
		{
			s.push(curr);
			ans[z]=1;
			count=1;			
		}
		else
		{
			if(s.top()>curr)
			{	
				while(!s.empty())
				{
					s.pop();	

				}
				s.push(curr);
				count=1;
			   ans[z]=count;
			
			}
			else{
				if(z>ans[z-1]&&curr!=s.top()&&m==curr){
					ans[z]=z+1;
					count=1;
					while(s.empty()==false)s.pop();	
				}
				else
				{s.push(curr);
				count++;
				ans[z]=count;}
				}
		}
		z++;
	}
	for(int i=0;i<sizeof(arr)/sizeof(int);i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<"END";
	return 0;
}

