#include<cmath>
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	if(n>=0 && n<=2){
		cout<<"-1"<<endl;
	}
	else if (n%2==0){
		cout<<pow((n/2),2)-1<<" "<<pow((n/2),2)+1<<endl;
	}
	else if (n%2==1){
		cout<<2*((n-1)/2)*((n+1)/2)<<" "<<pow((n-1)/2,2)+pow((n+1)/2,2)<<endl;
	}
	else{
		cout<<"-1"<<endl;
	}

	return 0;
}