// Program in c++ to calculate the percentage of marks of students in 5 subjects
#include<iostream>
using namespace std;
int main()
{
  float math,english,bio,physics,science,total,sum;
  float percentage;
  cout<<"Enter the marks of 5 subjects: ";
  cin>>math>>english>>bio>>physics>>science;
  cout<<"Enter total marks: ";
  cin>>total;
  sum = english+math+bio+physics+science;
  percentage=(sum/total)*100;
  cout<<"Percentage is :"<<percentage<<"%"<<"\n";
  return 0;
}