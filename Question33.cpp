#include <iostream>
#include <cmath>
using namespace std;
 
 
int main()
{
  int num=0;
  int dig=0,F=0,L=0;
  cout<<"PROGRAM TO FIND THE SUM OF FIRST AND LAST DIGIT OF ANY NUMBER";
  cout<<"\n \nEnter the number(INTEGER): ";
  cin>>num;
  int num1=abs(num);
  L=num1%10;
  while(num1>0)
  { 
    F=num1%10;
    num1=num1/10;
    dig++;
  }
  cout<<"\n \nThe first digit of "<<num<<" is "<<F<<" and last digit is "<<L;
  cout<<"\n \nSum of first and last digit of the number is: "<<(L+F); 
  return 0;
}
