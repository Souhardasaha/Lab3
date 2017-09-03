#include <iostream>
using namespace std;
 
int main() 
{
int cp,sp,result;
 
	cout<<"Enter cost price of item : ";
	cin>>cp;
	cout<<"Enter selling price of item : ";
	cin>>sp;
 
	result=sp-cp;
 
	if(result>0)
		cout<<"Profit : "<<result;
	else
		if(result<0)
    			cout<<"Loss : "<<-(result);
		else
			cout<<"No profit no loss";
 
	return 0;
}
