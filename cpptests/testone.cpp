/*

4.11 Test question: 
Write the following program: The user is asked to enter 2 floating point numbers (use doubles). The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
The program computes the answer on the two numbers the user entered and prints the results. If the user enters an invalid symbol, the program should print nothing.

*/

// My solution.  I would like to revist this to get the switch method to work as I prefer that over branching if statements.
// Also I suck at comments. Definitely need to improve there.


#include <iostream>

//Not using the switch method below as I couldn't get it to work here. I got it working afterwards in my other solution for this question
/*
void myCalc(char ch1, double x, double y){

  if (ch1 == '+'|| ch1 == '-' || ch1 == '*' || ch1 == '/' )   // Checks the 'ch1' variable against the 4 options
  {
    switch(ch1)
      {
        case '+':
          std::cout << x + y;
        case '-':
          std::cout << x - y;
        case '*':
          std::cout << x * y;
        case '/':
          std::cout << x / y;
      }
  }
    else std::cout << "Invalid input \n"; //Prints if user puts anything other than the 4 symbols

}

*/

void ifCalc(char ch1, double x, double y) // Using branching if statements. 
{
  if (ch1 == '+')
  {
    std::cout << x + y;
  }
  else if (ch1 == '-')
  {
    std::cout << x - y;
  }
  else if (ch1 == '*')
  {
    std::cout << x * y;
  }
  else if (ch1 == '/')
  {
    std::cout << x / y;
  }
  else std::cout << "Invalid input. Ending ";
}



int main()
  {

    
  std::cout << "Enter two fractional numbers\n";
  
  double x {};
  std::cin >> x;

  double y {};
  std::cin >> y;

  std::cout << "Choose one of the mathmatical symbols: \n";
  std::cout << "\'+\', \'-\', \'*\', \'/\' \n";

  char ch1 {};
  std::cin >> ch1;

  /*
  //why won't this work?
  
  myCalc(ch1, x, y); //Takes the char literal and the 2 doubles the user entered and runs it through if statement
  
  */

  ifCalc(ch1, x, y);
  return 0;
}
