#include <iostream>
using namespace std;
 
int main() 
{
	int a,b,c;
cout<<"The side of a Is:"<<endl;//programology
cin>>a;
cout<<"The side of b is:"<<endl;
cin>>b;
cout<<"The side of c is:"<<endl;
cin>>c;
if(a+b>c)
cout<<"The triangle is valid"<<endl;
else if(a+c>b)
cout<<"The triangle is valid"<<endl;
else if(c+b>a)
cout<<"The triangle is Valid"<<endl;
else
cout<<"TRiangle is invalid"<<endl;
	return 0;
}
