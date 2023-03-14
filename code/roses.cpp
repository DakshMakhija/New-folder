#include<iostream>
#include<climits>
 using namespace std;
 void sort(int a[],int n)
{
	int temp = 0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
		if(a[i]>a[j]){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	}
  }
}
 void  pairofroses(int a[],int n,int b){
    int x=0,y=0;
     int min=INT_MAX;
	 sort(a,n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==b){
              if(abs(a[j]-a[i])<min){
				  
				  min=abs(a[j]-a[i]);
				
			  }
			   cout<<a[i]<<" "<<a[j]<<" ";
        }
		 
    }
   }
 }

 int main(){
     
     int t;
     cin>>t;
     for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int amount;
        cin>>amount;
        pairofroses(a,n,amount);
     }

    return 0;
 }