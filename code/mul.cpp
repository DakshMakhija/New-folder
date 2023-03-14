#include<iostream>
#include<stdio.h>

using namespace std;


 void mul(int a[],int n){
    int b[n];
    for(int i=0;i<n;i++){
        int product = 1;
        for(int j=0;j<n;j++){
            if(i==j)
                continue;
            product=product*a[j];
        }
        b[i]=product;
        }
         for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
    }
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
     mul(a,n);
     
       
	return 0;
}