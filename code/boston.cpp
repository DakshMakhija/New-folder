#include<iostream>
using namespace std;

int number(int n){
	int sum=0,d;
	while(n>0){
		d=n%10;
		
		sum=sum+d;
		n=n/10;
	}
	return sum;
}
int primefactor(int n){
	int c=2;
	int sum=0;
	while(n>1){
		if(n%c==0){
			sum=sum+number(c);
			n=n/c;
		}
		else{
			c++;
		}
	}
	return sum;
}
int main(){
	int sum1,sum2,n;
	cin>>n;
	sum1=number(n);
	sum2=primefactor(n);
	
	if(sum1==sum2){
	cout<<1<<" ";
	}
	else{
         cout<<0<<" ";
	}	
return 0;
}