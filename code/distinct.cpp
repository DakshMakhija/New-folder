#include<bits/stdtr1c++.h>

using namespace std;

void count(string s,int k){
int result=0;
int count=0;
sort(s.begin(),s.end());
for(int i=0;i<s.length();i++){
 if(s[i+1]!=s[i]){
  count++;
 }
 if(count<=k){
    result++;
 }
}
cout<<result<<endl;

}
    


int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int k;
    cin>>k;
    count(s,k);
    }
    return 0;
}