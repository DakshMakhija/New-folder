#include<iostream>
#include<cctype>
using namespace std;
int main() {
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(islower(s[i])){  //if(s[i]>='A' && s[i]<='Z'){a[i]=s[i]+'a'-'A';}
          s[i]=s[i]-32;
		}
		else{
			s[i]=s[i]+32;		} //else if(s[i]>='a' && s[i]<='z'){a[i]=s[i]+'A'-'a';}
	}
	cout<<s<<"";
	return 0;
}//strings