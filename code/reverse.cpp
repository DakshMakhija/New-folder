#include<iostream>
using namespace std;
int main(){
    int n1;
    cin>>n1;
  int a[n1];

    for(int i=0;i<n1;i++){
       cin>>a[i];
   
    }
    for(int i=n1-1;i>=0;i--){
       cout<<a[i]<<" ";
   
    }
    return 0;
}