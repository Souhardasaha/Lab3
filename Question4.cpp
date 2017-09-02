#include <iostream>
using namespace std;

int main() 
{
	 int n;
           
           cout<<"\n Enter the Number :";
           cin>>n;
           if((n%5==0)&&(n%11==0))
            {
                   cout<<"\n Its Divisible by 5 and 11.";
            }
          else
           {
                  cout<<"\n Its not Divisible by 5 and 11.";
            }

	
	return 0;
}
