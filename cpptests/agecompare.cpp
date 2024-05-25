/*

Write a program that asks for the name and age of two people, then prints which person is older.

Here is the sample output from one run of the program:

Enter the name of person #1: John Bacon
Enter the age of John Bacon: 37
Enter the name of person #2: David Jenkins
Enter the age of David Jenkins: 44
David Jenkins (age 44) is older than John Bacon (age 37).

//This is my answer for this. It seems pretty straight forward. You can do it with if statements which would probably look neater than the condition operator


*/


#include <iostream>




std::string getName(int person)
{
  std::cout << "Enter the name of person #" << person << ": ";
  std::string personName {};
  std::getline(std::cin >> std::ws, personName);
  return personName;
  
}

int getAge(std::string name){
  std::cout << "Enter the age for " << name << ": ";
  int age {};
  std::cin >> age;
  }
  return age;
  
}

//neater way to do this?
void ageCompare(std::string personOne, int ageOne, std::string personTwo, int ageTwo)
{
  ageOne > ageTwo ? std::cout << personOne << " (" << ageOne << ") is older than " << personTwo << " (" << ageTwo << ")" : std::cout << personTwo << " (" << ageTwo << ") is older than " << personOne << " (" << ageOne << ")"; 

}





int main()
{

 
  std::string firstPerson {getName(1)};
  int ageOne {getAge(firstPerson)};

  std::string secondPerson {getName(2)};
  int ageTwo {getAge(secondPerson)};

  ageCompare(firstPerson, ageOne, secondPerson, ageTwo);



  return 0;
}


