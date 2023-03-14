#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n,n1,n2,i;
	int d,sum,s;
    int count=0;
    cin>>n1;
    cin>>n2;
    for(i=n1;i<=n2;i++){
        n=i;
        sum =0;
    while(n!=0){
      d=n%10;
      s=pow(d,3);
      sum=sum+s;
      n=n/10;
     
    }
    if(sum == i){
        count++;//or for know the number you can simply write cout<<i<<" ";
    }
}
 cout<<count<<" ";

	return 0;
}