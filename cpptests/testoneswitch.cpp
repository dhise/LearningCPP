#include <iostream>



double myCalc(char ch1, double x, double y)
{

  if (ch1 == '+'|| ch1 == '-' || ch1 == '*' || ch1 == '/' )//checks if user enters one of the options
  {
    switch(ch1)//if usable option is picked do the corresponding equation
      {
        case '+':
          return x + y;
        case '-':
          return x - y;
        case '*':
          return x * y;
        case '/':
          return x / y;
      }
  }
  return 0.00001; //if none of the 4 options are used then return a very unlikely value
  
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


  double answer{myCalc(ch1, x, y)};//Takes the char literal and the 2 doubles the user entered and runs it through switch statement

  if (answer != 0.00001) //if the value returned isn't the very unlikely one then print the answer
  {
    std::cout << x << ' ' << ch1 << ' ' << y << " is " << answer;
  }
  else std::cout << "Invalid input. Ending"; //this was a bad way to do this



  return 0;
}
