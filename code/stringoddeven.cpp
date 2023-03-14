#include<bits/stdtr1c++.h>

using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        int y=s[i];
        if(i%2!=0){
            char x=s[i];
            x--;
            s[i]=x;
        }
        else{
            char x=s[i];
            x++;
            s[i]=x;
        }
    }
    cout<<s<<endl;
    return 0;
}