#include<bits/stdc++.h>
using namespace std;
	string pal(string s){                          //string p = s;
    		for(int i=0;i<s.length()/2;i++){       //reverse(p.begin(),p.end());
			if(s[i]!=s[s.length()-1-i]){           //if(s==p){return "true"}
				return "false";                    //else{return "false"}
			}
		}
		return "true";
	}
	int main(){
		string s;
		cin>>s;
		cout<<pal(s)<<"";
	return 0;
}