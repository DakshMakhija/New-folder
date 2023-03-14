#include<iostream>
#include<stdio.h>

using namespace std;


 int max(int a[],int n){
    int max = a[0];
    for(int i=0;i<n;i++){
        
            if(a[i]>max)
               max= a[i]; 
        }
       return max;
    }
 



int main() {
      int n,i;
      cout<<"enter the size"<<" "<<endl;
	  cin>>n;
	  int a[n];
	  for(i=0;i<n;i++){
		  cin>>a[i];
	  }
    int c = max(a,n);
     cout<<c<<" ";
       
	return 0;
}