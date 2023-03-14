#include<iostream>
using namespace std;
 void sort(int a[],int n)
  {int temp = 0;
     for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
	  if(a[i]>a[j]){
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;  
            }
			if(a[i]>a[k]){
              temp=a[i];
              a[i]=a[k];
              a[k]=temp;  
            }
		}
		
	 }
	}	
  }	
void targetSum(int a[], int n, int target)
{    sort(a,n);
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
		 for(int k=j+1;k<n;k++){
            if(a[i]+a[j]+a[k]==target)
            cout<<a[i]<<","<<" "<<a[j]<<" and"<<" "<<a[k]<<"\n";
        }
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
 