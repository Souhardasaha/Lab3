#include <iostream>
using namespace std;
 
int main() {
	long int decnum, rem, quot;
	int i=1, j, octnum[100];
	cout<<"Enter any decimal number : ";
	cin>>decnum;
	quot=decnum;
	while(quot!=0)
	{
		octnum[i++]=quot%8;
		quot=quot/8;
	}
	cout<<"Equivalent octal value of "<<decnum<<" is : \n";
	for(j=i-1; j>0; j--)
	{
		cout<<octnum[j];
	}
	return 0;
}
