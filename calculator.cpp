#include <iostream>
int main(){
int num1, num2, num3;
char operation;
num3 = num1 + num2;
std::cout << "Hello user, please enter an operation" << std::endl;  
std::cout << "Addition: +" <<  " Subtraction: -" << " Multiplication: *" << " Division: /" << std::endl; // basically select +, -, *, or /
std::cout << "Press 0 to end the program. This will be done once 2 numbers are entered"  << std::endl;
std::cin >> operation;
std::cout << "Enter in two values that will be operated on" << std::endl;   // added etc. 
std::cin >> num1 >> num2; 
switch(operation){
    case '+':
    std::cout << num1 + num2 << std::endl;
 break; 

    case '-':
    std::cout << num1 - num2 << std::endl;
break;

    case '*':
   std::cout << num1 * num2 << std::endl;
break;

    case '/':
  std::cout << num1 / num2 << std::endl;
break;

case '0':
std::cout << "End of program!" <<  std::endl;
return 0;


}

std::cout << "Have a great day!!!" <<  std::endl;
}
