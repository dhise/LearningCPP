//this took me a bit and was much harder than I feel like it should have been
//i also cheated and used a while loop before they have been introduced in this tutorial I'm using
//im sure tomorrow when I wake up it will click how I could have done it with out it



#include <iostream>
/*
  Extra credit: This one is a little more challenging.

  Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the height of the tower in meters. Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).

  Use a function to calculate the height of the ball after x seconds. The function can calculate how far the ball has fallen after x seconds using the following formula: distance fallen = gravity_constant * x_seconds2 / 2

Note: The ^ symbol isn’t an exponent in C++. Implement the formula using multiplication instead of exponentiation


At 0 seconds, the ball is at height: 100 meters
At 1 seconds, the ball is at height: 95.1 meters
At 2 seconds, the ball is at height: 80.4 meters
At 3 seconds, the ball is at height: 55.9 meters
At 4 seconds, the ball is at height: 21.6 meters
At 5 seconds, the ball is on the ground.


*/

double getHeight()
{
  std::cout << "Enter the height of the tower\n";
  double towerHeight {};
  std::cin >> towerHeight;
  return towerHeight;
}

double currentHeight(double towerHeight, double seconds)
{
  double currentHeight {towerHeight};
  currentHeight = currentHeight - ((seconds)*(9.8*seconds))/2;
  if (currentHeight > 0)
  {
  std::cout << "At " << seconds << " seconds, the ball is at height : " << currentHeight << " meters\n";
  return seconds + 1; 
  }
  else std::cout << "At " << seconds << " the ball is on the ground";
  return seconds + 5;
  
}


int main(){

  double towerHeight {getHeight()};
  double seconds {0};

  while (seconds < 6)
  {
  seconds = currentHeight(towerHeight, seconds);
  }
  
  

  return 0;
}

