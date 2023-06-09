// Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.

// Input Format
// String

// Constraints
// Length of String should be between 2 to 1000.

// Output Format
// String

// Sample Input
// acb
// Sample Output
// a2c-1b
// Explanation
// For the sample case, the Ascii code of a=97 and c=99 ,the difference between c and a is 2.Similarly ,the Ascii code of b=98 and c=99 and their difference is -1. So the ans is a2c-1b.



#include<bits/stdc++.h>

using namespace std;

string convert(int t)
{
     ostringstream ss;
     ss<<t;
     return ss.str();
}

int main()
{
     string str;
     cin>>str;
     string str2="";
     bool flag=false;
     int i;
     for(i=0;i<str.length();)
     {
          if(flag==false)
          {
               str2+=str[i];
               flag=true;
               i++;
          }
          else
          {
               int x;
               x=str[i]-str[i-1];
               str2+=convert(x);
               flag = false;
          }
     }
     cout<<str2;
}