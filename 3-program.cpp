/*
    Program3: if Statement with Multiple Conditions
    Create a program that takes two integer inputs and an arithmetic operator (+, -, *, /) from the
    user, then performs the corresponding operation. Use if, else if, and else statements to
    handle each case and print the result.
*/
#include<iostream>
using namespace std;
int main(){

    int x,y;
    double result;
    char o;
    bool flag = true;
    cout<<"Enter first integer.\n";
    cin>>x;
    cout<<"Enter second integer.\n";
    cin>>y;
    cout<<"Select one option from :\n+  ,  -  ,  *  ,  /\n";
    cin>>o;
    if(o=='+')
        result = x + y;
    else if(o == '-')
        result = x - y;
    else if(o == '*')
        result = x*y;
    else if(o == '/')
        result = (double)x/y;
    else{
        
        cout<<"Invalid choice\n";
        flag = false;
    }
    if(flag == true)
        cout<<"Result is : "<<result<<'\n';

    return 0;
}