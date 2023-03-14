#include<iostream>
using namespace std;
  

  int partision(int *a,int s,int e)
  {
    int i=s-1;
    int pivot = a[e];
    for(int j=s;j<e;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        } 
    }
     swap(a[i+1],a[e]);
    return i+1;
  }


void quicksort(int *a,int s,int e){
    if(s<e)
    {
     int p=partision(a,s,e);
     quicksort(a,s,p-1);
     quicksort(a,p+1,e);
    }
}





int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    quicksort(a,0,n-1);
  cout<<"sorted array"<<" ";
 for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
 }
    return 0;
}