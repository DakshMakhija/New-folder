#include<iostream>
using namespace std;


void merge(int *a,int s,int q, int e ){
    int i,j,k;
    int b[e-s+1];
    i=s;
    j=q+1;
    k=0;
    while(i<=q && j<=e){
        if(a[i] < a[j]){
       b[k++]=a[i++];
        }
  else{
    b[k++]=a[j++];
  }
}
  while(i<=q){
    b[k++]=a[i++];
  }
  while(j<=e){
    b[k++]=a[j++];
    }
    int pos=0;
 for(int i=s;i<=e;i++){
    a[i]=b[pos++];
 }
}

void mergesort(int a[],int s,int e){
    int q;
    if(s<e){
    q=s+(e-s)/2;
    mergesort(a,s,q);
    mergesort(a,q+1,e);
    merge(a,s,q,e);
    }

}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    } 
    mergesort(a,0,n-1);
  cout<<"sorted array"<<" ";
 for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
 }
    return 0;
}