#include<iostream>
using namespace std;
void even(int e,int n){
if(e>n){
return;
}
cout<<e<<endl;
even(e+2,n);
}
void odd(int n){
if(n<=0){
return;
}cout<<n<<endl;
odd(n-2);
}
int main() {
int n;
cin>>n;
if(n&1){
odd(n);
even(2,n-1);
}
else{ 
	odd(n-1);
	even(2,n);
}
return 0;
}