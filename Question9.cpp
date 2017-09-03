    #include <iostream>
    using namespace std;
     
    int main() 
    {
    	char ch;
    	cout<<"Enter any character :";
    	ch=getchar();
    	if(isalpha(ch))
    		cout<<"Alphabet";
    	else if(isdigit(ch))
    		cout<<"Number";
    	else
    		cout<<"Special Character";
     
    	return 0;
    }
