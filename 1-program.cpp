/*
Write a program that takes an integer input from the user and checks if it is positive, negative, or
zero using if, else if, and else statements. Print the result accordingly.
*/
#include<iostream>
using namespace std;

int main(){
    int input;
    cout<<"Enter any integer:\n";
    cin>>input;
    if(input>0)
        cout<<"It's a positive number.\n";
    else if(input<0)
        cout<<"It's a negative number.\n";
    else
        cout<<"It's Zero.\n";

    return 0;
}