 #include <iostream>
using namespace std;

int main() {
     int number;
    int first_digit;
    int second_digit;
    std::cout << "Enter the number: ";
    std::cin >> number;
    first_digit = number/10;
    second_digit = number%10;
    if(number >= 11 && number <= 20)
    {
        switch(number)
        {
            case 11:
                std::cout<<"eleven";
                break;

            case 12:
                std::cout<<"twelve";
                break;
            case 13:
                std::cout<<"thirteen";
                break;
            case 14:
                std::cout<<"fourteen";
                break;
            case 15:
                std::cout<<"fifteen";
                break;
            case 16:
                std::cout<<"sixteen";
                break;
            case 17:
                std::cout<<"seventeen";
                break;
            case 18:
                std::cout<<"eighteen";
                break;
            case 19:
                std::cout<<"nineteen";
                break;
        }
    }
    else
    {
        switch(first_digit)
        {
            case 1:
                if(second_digit == 0)
                    std::cout<<"ten";
                break;
            case 2:
                std::cout<<"twenty";
                break;
            case 3:
                std::cout<< "thirty";
                break;
            case 4:
                std::cout<<"fourty";
                break;
            case 5:
                std::cout<<"fifty";
                break;
            case 6:
                std::cout<<"sixty";
                break;
            case 7:
                std::cout<<"seventy";
                break;
            case 8: 
                std::cout <<"eighty";
                break;
            case 9:
                std::cout <<"ninety";
                break;
            case 10:
                std::cout <<"one hundred";
                break;
        }
        if(first_digit > 1 && number != 100) std::cout<<"-";
        switch(second_digit)
        {
            case 1:
                std::cout<<"one";
                break;
            case 2:
                std::cout<<"two";
                break;
            case 3:
                std::cout<<"three";
                break;
            case 4:
                std::cout<<"four";
                break;
            case 5:
                std::cout<<"five";
                break;
            case 6:
                std::cout<<"six";
                break;
            case 7:
                std::cout<<"seven";
                break;
            case 8:
                std::cout<<"eight";
                break;
            case 9:
                std::cout<<"nine";
                break;
            default:
                break;

        }
    }
	return 0;
}
