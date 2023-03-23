#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;
int func(vector<int> &wt,vector<int> &val,int i,int W)
{
	if(i==(int)wt.size())
	{
		return 0;
	}

	if(dp[i][W]!=-1)
	{
		return dp[i][W];
	}

	int op1=INT_MIN,op2=INT_MIN;
	if(W >= wt[i])
	{
		op1=val[i] + func(wt,val,i,W-wt[i]);
	}

	op2=func(wt,val,i+1,W);
	return dp[i][W]=max(op1,op2);

}

int main() {
	int N,W; cin>>N>>W;

	dp=vector<vector<int>> (N,vector<int> (W+1,-1));

	vector<int> wt(N);
	vector<int> val(N);

	for(int i=0;i<N;i++) cin>>wt[i];
	for(int i=0;i<N;i++) cin>>val[i];

	cout<<func(wt,val,0,W);

	return 0;
}