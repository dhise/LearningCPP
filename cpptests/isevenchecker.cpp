/*

Write a program that asks the user to input an integer, and tells the user whether the number is even or odd. Write a constexpr function called isEven() that returns true if an integer passed to it is even, and false otherwise. Use the remainder operator to test whether the integer parameter is even. Make sure isEven() works with both positive and negative numbers.

Show Hint

Your program should match the following output:

Enter an integer: 5
5 is odd


this solution required a constexpr which at first frustrated me
having to add constexpr to my solutions makes it harder as most of the functions i made couldn't return one

but after working on this simple solution i've learned to embrace constexpr as it forces me to think differently with my functions

learned to love them even...

if something can be constexpr   it will be a constexpr

i cant tell if im losing my mind or learning deeper levels 



*/

#include <iostream>


constexpr bool isEven(int num){

  return num % 2 == 0;
  
}


int main(){

  
  std::cout << "Enter an integer: ";
  int num {};
  std::cin >> num;

  
  isEven(num) ? std::cout << num << " is even" : std::cout << num << " is odd"; //opted to go with this but not sure if it's bad practice to use this with a function
  
  /*
  
  if (isEven(num)){
    std::cout << num << " is even";
  }
  else std::cout << num << " is odd";

  */
  
}
