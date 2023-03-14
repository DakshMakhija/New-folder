#include<iostream>
using namespace std;
int main() {
	int f1,f2,c;
	cin>>f1;
	cin>>f2;
	int k;//step size//
	cin>>k;
	while(f1<=f2){
        c=5*(f1-32)/9;
		cout<<f1<<" "<<c<<"\n";
		f1=f1+k;
		
	}
	
}