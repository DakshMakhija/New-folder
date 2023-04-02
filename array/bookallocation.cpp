// You are given number of pages in n different books and m students. The books are arranged in ascending order of number of pages. Every student is assigned to read some consecutive books. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum.

// Input Format
// First line contains integer t as number of test cases. Next t lines contains two lines. For each test case, 1st line contains two integers n and m which represents the number of books and students and 2nd line contains n space separated integers which represents the number of pages of n books in ascending order.

// Constraints
// 1 < t < 50
// 1< n < 100
// 1< m <= 50
// 1 <= Ai <= 1000

// Output Format
// Print the maximum number of pages that can be assigned to students.

// Sample Input
// 1
// 4 2
// 12 34 67 90
// Sample Output
// 113 
// Explanation
// 1st students : 12 , 34, 67 (total = 113)
// 2nd students : 90 (total = 90)
// Print max(113, 90)


#include<bits/stdc++.h>
using namespace std;
bool prove(int a[],int n,int m,int mid){
    int count=1;
    int page=0;
    for(int i=0;i<n;i++){
        if(page+a[i]>mid){
            count++;
            page=a[i];
            if(count>m){
                return false;
            }
        }
        else{
            page+=a[i];
        }
    }
    return true;
}
int checkif(int a[],int n,int m)
{
	int sum=0;
  int start=INT_MIN;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
    start=max(a[i],start);
	}

	int end=sum,ans=0;
	while(start<=end)
	{
    int mid=start+(end-start)/2;
     if(prove(a,n,m,mid)){
         ans=mid;
         end=mid-1;
     }
     else{
         start=mid+1;
     }
	}
	cout<<ans<<endl;
	return 0;
}
int main() 
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		checkif(a,n,m);

	}
	return 0;
}
