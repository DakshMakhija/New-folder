#include<iostream>
using namespace std;
int main() {
	int m;
	cin>>m;
	int a[m];
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	int q;
	cin>>q;
	while(q--){
		int amount,k;
		cin>>amount>>k;
		int c=0;
		for(int i=0;i<m;i++){
		if(amount%a[i]==0){
			c++;
		}
	}
	if(c>=k){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}
	return 0;
}