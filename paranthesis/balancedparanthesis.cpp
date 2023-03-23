// You are given a string of brackets i.e. '{', '}' , '(' , ')', '[' , ']' . You have to check whether the sequence of parenthesis is balanced or not.
// For example, "(())", "(())()" are balanced and "())(", "(()))" are not.

// Input Format
// A string of '(' , ')' , '{' , '}' and '[' , ']' .

// Constraints
// 1<=|S|<=10^5

// Output Format
// Print "Yes" if the brackets are balanced and "No" if not balanced.

// Sample Input
// (())
// Sample Output
// Yes
// Explanation
// (()) is a balanced string


#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
bool balance(string str)
{
    int n = str.length() ; 
    stack <char> s ; 
    for(int i = 0 ; i < n; i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]) ; 
        }
        if(str[i] == ')')
        {
            if(s.empty() || s.top() != '(')
            {
                return false ; 
            }
            s.pop() ; 
        }
        if(str[i] == '}')
        {
            if(s.empty() || s.top() != '{')
            {
                return false ; 
            }
            s.pop() ; 
        }
        if(str[i] == ']')
        {
            if(s.empty() || s.top() != '[')
            {
                return false ; 
            }
            s.pop() ; 
        }
    }
    if(s.empty() == true)
    {
        return true ; 
    }
    else
    {
        return false ; 
    }
}
int main() 
{
    string str ; 
    cin>>str ; 
    bool p = balance(str) ; 
    if(p)
    {
        cout<<"Yes" ; 
    }
    else
    {
        cout<<"No" ; 
    }
}
