#include<bits/stdtr1c++.h>

using namespace std;
    int main(){
       int n;
       int sum=0;
       cin>>n;
       while ((sum+n)>=0)
       {
        sum=sum+n;
        cout<<n<<" ";
        cin>>n;
       }

        return 0;

    }