/*
    Program2: Nested if Statements
    Write a program that takes a user’s age as input and uses nested if statements to determine and
    print whether the person is a child (age < 12), teenager (age between 12 and 18), adult (age
    between 18 and 60), or senior (age > 60).
*/
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age:\n";
    cin>>age;
    if(age<=0)
        cout<<"Invalid Age.\n";
    else if (age<=12)
        cout<<"You are a child.\n";
    else if(age>12 && age<=18)
        cout<<"You are a teenager\n";
    else if(age>18 && age<60)
        cout<<"You are an adult\n";
    else
        cout<<"You are senior\n";
    
    return 0;
}