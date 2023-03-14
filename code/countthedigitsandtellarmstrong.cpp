#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n,d;
	int sum=0,s;
    int count=0;
    cin>>n;
	while(n%10){
		count++;
		n=n/10;
		
	}
	
    while(n!=0){
      d=n%10;
      s=pow(d,count);
      sum=sum+s;
      n=n/10;
     
    }
if(sum==n){
 cout<<"true";
}
else{
	cout<<"false";
}
	return 0;
}