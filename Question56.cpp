#include <iostream>
using namespace std;
 
int main() {
int a,b,c,i,j,n,s;
cout << "Enter a positive  integer : ";
cin >> n;
for( a=1 ; a<=n ; a++ )
{
    s = 0;
    b = a;
    while(b != 0)
    {
      j = 1;
      c = b % 10;
      for( i=1 ; i<=c ; i++ )
         {
          j *= i;
         }
      s += j;
      b /= 10;
    }
    if(s == a)
       cout << a << "\n";
}
return 0;
}
