#include<iostream>
using namespace std;

int main(){
    int n,c;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=-1;
    }
   for(int i=0;i<n;i++){
    c=1;
    int j;
    for( j=i+1;j<n;j++){
        if(a[i]==a[j])
        {
            c++;
            b[j]=0;
        }
    }
    if(b[i]!=0){
        b[i]=c;
    }
   }
    for(int i=0;i<n;i++){
        if(b[i]==1){
            cout<<a[i]<<" ";
        }
    }
    
 
       
    return 0;
}