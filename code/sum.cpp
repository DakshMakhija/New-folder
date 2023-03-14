#include<iostream>
using namespace std;
void targetSum(int a[], int n, int target)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target)
            cout<<a[i]<<"and"<<a[j]<<" ";
        }
    }
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	targetSum(arr,n,x);
	return 0;
}