#include <iostream>
#include <string>

bool checkLuhn(const std::string& number) {
   int numOfDigits = number.length();
   int sum = 0, isSecond = false;

   for (int i = numOfDigits - 1; i >= 0; i--) {
       int digit = number[i] - '0';

       if (isSecond == true) 
           digit = digit * 2;
           
       sum += digit / 10;
          
       sum += digit % 10;

           
       isSecond = !isSecond;
       

       
   }
   return (sum % 10 == 0);
}

int main()
{
    std::string userNumber{};
    std::cout << "Enter your account number: ";
    std::getline(std::cin, userNumber);
    
    if (checkLuhn(userNumber)) 
        std::cout << "\nYour account number is valid! Welcome!" << std::endl;     
    else 
        std::cout << "\nInvalid account number. Terminating program. . ." << std::endl;

    return 0;

   
}

