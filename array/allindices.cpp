
// Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns an array containing indices of all items in the array which have value equal to M. Print all the values in the returned array.

// Input Format
// Enter a number N(size of the array) and add N more numbers to the array Enter number M to be searched in the array

// Constraints
// 1 <= Size of array <= 10^5

// Output Format
// Display all the indices at which number M is found in a space separated manner

// Sample Input
// 5
// 3
// 2
// 1
// 2
// 3
// 2
// Sample Output
// 1 3
// Explanation
// 2 is found at indices 1 and 3.






#include<bits/stdc++.h>
using namespace std;

void AllIndices(int arr[],int repo,int out[],int &outpos,int num)
{
     if(repo==-1)
          return;
     if(arr[repo]==num)
          out[outpos++]=repo;
     AllIndices(arr,repo-1,out,outpos,num);
}
int main()
{
     int n;
     cin>>n;

     int a[n],i;
     for(i=0;i<n;i++)
          cin>>a[i];
     int out[1000],outpos=0;
     int num;
     cin>>num;
     AllIndices(a,n-1,out,outpos,num);
     for(i=outpos-1;i>=0;i--)
          cout<<out[i]<<" ";
}