#include<bits/stdtr1c++.h>
using namespace std;
  
int rep1(int n){
	if(n==0){
		return 0;
	}
	else
	{
		int digit = n%10;
		if(digit==0){
         digit=5;
		 return rep1(n/10)*10+digit;
		}	
		else{
			return rep1(n/10)*10+digit;
		}
	}
}

int rep(int n){
	if(n==0){
		return 5;
	}
	else{
		return rep1(n);
	}
} 
    int main(){
       int n;
      cin>>n;
	  cout<<rep(n);
	}