
#include<bits/stdtr1c++.h>

using namespace std;

void count(string s){
 char result;
 int max=0;
int count[256]={0};
sort(s.begin(),s.end());
for(int i=0;i<s.length();i++){
    if(s[i+1]==s[i]){
        count[s[i]]++;
    }
    if(max<count[s[i]]){
        max=count[s[i]];
        result=s[i];
    }
}
cout<<result<<endl;

}
    


int main(){
    string s;
    cin>>s;
    count(s);
    return 0;
}