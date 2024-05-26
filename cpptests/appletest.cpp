/*
Sample output:

Mary has a few apples.
How many apples do you have? 1
You have a single apple.
getQuantityPhrase() should take a single int parameter representing the quantity of something and return the following descriptor:

< 0 = “negative”
0 = “no”
1 = “a single”
2 = “a couple of”
3 = “a few”
> 3 = “many”
getApplesPlural() should take a single int parameter parameter representing the quantity of apples and return the following:

1 = “apple”
otherwise = “apples”
This function should use the conditional operator.

Both functions should make proper use of constexpr.



//I really don't have a good grasp on constexpr and constants. I'm not sure how you can make the function that returns apple or apples a constexpr when it needs your input first. I'll find out
//Will probably try this again when I'm feeling better and more rested. This one was deceptively hard with some nuances that caused me a lot of issues in the switch statement
//I was trying to make a case that evaluated apples    example   case apples < 0 or apples > 3  but it doesnt like that. not sure if doing an if else statement in the default is bad or not

*/

#include <iostream>

std::string getQuantityPhrase(const int quantity)
{
  int apples {quantity};

  switch (apples){
    case 0:
    return "no";
    break;
    case 1:
    return "a single";
    break;
    case 2:
      return "a couple of";
    case 3:
      return "a few";
    default:
    if (apples < 0)
    {
      return "negative";
    }
    else return "many";
    
  }
  
    
  
}

// Write the function getApplesPluralized() here
std::string getApplesPluralized(const int quantity)
{
  int apples {quantity};
  return (apples == 1) ? "apple" : "apples";
  
}


int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}



