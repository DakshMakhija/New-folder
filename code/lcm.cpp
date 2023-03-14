#include<iostream>
using namespace std;


int main() {
	int n1,n2,lcm;
	cin>>n1;
	cin>>n2;
	lcm=(n1>n2)?n1:n2;
	while(1){
		if(lcm%n1==0 && lcm%n2==0){
			cout<<lcm<<" ";
			break;
		}
		else
		     ++lcm;
	}
	return 0;
}