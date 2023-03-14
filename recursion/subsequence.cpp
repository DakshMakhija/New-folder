#include<iostream>
using namespace std;
  


void subs(string t,string op,int &count){
	
    if(t.empty()){
		
         cout<<op<<" ";
		 count++;
         return;
    }
	subs(t.substr(1),op,count);
    subs(t.substr(1),op + t[0],count);
   
}

int main(){
	int count=0;
    string t;
    cin>>t;
    subs(t,"",count);
	cout<<endl;
	cout<<count;
    return 0;

}