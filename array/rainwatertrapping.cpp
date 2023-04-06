

// Tushar is a rain harvester.He has a set of N bars with each bar of some height and width of 2 units.Compute how much water it can trap after next raining.

// Input Format
// First line takes integer N(no. of bars) as input.
// Second line takes N integers defining the height of each bar respectively.

// Constraints
// 1<=N<=10^5
// 0<=height<=10^5

// Output Format
// Print how much water is contained by this set of bars in the next rain.

// Sample Input
// 12
// 0 1 0 2 1 0 1 3 2 1 2 1
// Sample Output
// 6
// Explanation
// The above elevation map (black section) is represented by an array [0,1,0,2,1,0,1,3,2,1,2,1].And the total trapped rain be of 12 units.



















#include<iostream>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    int A[n];

    for(int i=0;i<n;i++) cin>>A[i];

    int ans=0;
    int left_max[n];
    int mx=A[0];

    for(int i=0;i<n;i++)
    {
        if(A[i] > mx)
        {
            mx=A[i];
        }
        left_max[i]=mx;
    }

    mx=A[n-1];
    int right_max[n];
    for(int i=n-1;i>=0;i--)
    {
        if(A[i] > mx)
        {
            mx=A[i];
        }
        right_max[i]=mx;
    }
    for(int i=0;i<n;i++)
    {
        int left_max_i=left_max[i];
        int right_max_i=right_max[i];
        ans+=(min(left_max_i,right_max_i) -A[i]);
    }
  cout<<ans<<endl;
    return 0;
}
