#include<iostream>
using namespace std;
bool check(int a[],int space,int n,int c)
{
	int count=1;
    int last=a[0];
   for(int i=1;i<n;i++)
   {
	   if(a[i]-last>=space)
	   {
		   last=a[i];
		   count++;
		   if(count==c){
			   return true;
		   }
	   }
   }
     return false;
   
}
void agc(int a[],int n,int c)
{
 int s=0,k=0;
 int ans=0;
 int e=a[n-1]-a[0];
 while(s<=e)
 {
 k=(s+e)/2;

 if( check(a,k,n,c))
 {
	 ans=k;
	 s=k+1;
 }
 else
 {
	 e=k-1;
 }
 }
 cout<<ans;
}
int main() 
{
	int n,c;
	cin>>n>>c;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
   agc(a,n,c);

	return 0;
}