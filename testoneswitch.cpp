//Follow up on 4.10 Test question

//I edited the switch version and got it working enough to where I'm happy. Not sure how to get it to display the invalid with out having to return a 0. Might revist later.
//I like this more than branching if statements not sure which one is more efficient or faster

#include <iostream>



double myCalc(char ch1, double x, double y){

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
  else //if anything other than 4 options entered then print invalid
  {
    std::cout << "Invalid input. Ending ";
  }
  return 0;
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

  std::cout << answer;
  
 

  return 0;
}
