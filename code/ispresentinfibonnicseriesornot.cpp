


// Given a number N, check if it is a member of Fibonacci sequence or not

// Input Format
// Read a number N as input

// Constraints
// Output Format
// Output Yes if N is a part of fibonacci sequence else print No

// Sample Input
// 8
// Sample Output
// Yes





#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int a =0,b=1;
    while(a<n){
        int temp = a;
        a = b;
        b += temp;

        if(a == n){
            cout<<"Yes"<<endl;
            break;
        }
    }
    if(a!=n){
        cout<<"No"<<endl;
    }
    return 0;
}