//Program to calculate the digits of number
#include<iostream>
using namespace std;
int main()
{
  int number,d=0;
  cout<<"Enter a number: ";
  cin>>number;
  while (number != 0){
  number = number/10;
  d++;
  }
  cout<<"Digits of number are: "<<d<<"\n";
}