/*Topic:1. Pallindrome Integer
Problem Statement
Given an integer  x , return  true  if  x  is palindrome integer. An integer is a palindrome when it reads the same backward as forward.
For example,  121  is a palindrome while  123  is not.
Constraints:
-2^31 <= x <= 2^31 - 1
Note : Solve it without converting the integer to a string.
*/
#include <iostream>
using namespace std;


int main()
{
    
    int x;
    cout<<"Enter Value of x:";
    cin>>x;    
    int temp=x,reverse=0;
    while(temp!=0)
    {
        reverse=reverse*10+temp%10;
        temp=temp/10;
    }
    if(x==reverse)
    {
        cout<<"True";
    }
    else 
    {
        cout<<"False";
    }
    return 0;
}