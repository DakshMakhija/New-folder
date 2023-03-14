#include<bits/stdtr1c++.h>

using namespace std;

void sub(long long *a,long long n,long long k){
   long long  count=0;
    long long mul;
    for(long long i=0;i<n;i++){
        if(a[i]<k)
            count++;
            mul=a[i];
    for(long long j=i+1;j<n;j++){
        mul=mul*a[j];
        if(mul<k)
            count++;
        else
            break;
    }
 }
 cout<<count;
}

int main(){
    long long n;
    cin>>n;
    long long k;
    cin>>k;
    long long a[n];
    for (long long i=0;i<n;i++){
        cin>>a[i];
    }
    sub(a,n,k);
 return 0;
}