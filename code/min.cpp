#include<iostream>
#include<stdio.h>

using namespace std;


 int swapcount(int a[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
        if(a[i]<a[j]){
            count++;
        }
        }
    }
    return count;
 }



int main() {
      int n,i;
      int count;
      cout<<"enter the size"<<" "<<endl;
	  cin>>n;
	  int a[n];
	  for(i=0;i<n;i++){
		  cin>>a[i];
	  }
        count = swapcount(a,n);
		
			cout<<"number of counts\n"<<count<<" ";
		

	return 0;
}