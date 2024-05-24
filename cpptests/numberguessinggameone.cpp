//first iteration of guessing game

//missing random number generation
#include <iostream>





int main(){

  int pcGuess {50};
  int userGuess {};

  bool guessed {false};

  std::cout << "Guess a number you stupid asshole\n";
  std::cin >> userGuess;
  while (guessed == false)

    if (userGuess > pcGuess)
    {
      std::cout << "Lower your guess idiot\n";
      std::cout << "Guess again \n";
      std::cin >> userGuess;
    }
    else if (userGuess < pcGuess)
    {
      std::cout << "That's a tiny little guess bud\n";
      std::cout << "Guess again \n";
      std::cin >> userGuess;
    }
    else 
    {
      std::cout << "Okay you win\n";
      guessed = true;
    }


  return 0;
}
