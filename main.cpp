//Authors: Aero Zajac
#include<iostream>
#include<string>


int main()
{
  //declare variables
  std::string first, last;
  int lucky;

  std::cout<< "Please enter your first and last name." <<std::endl;

  //get user input

  std::cin>>first;
  std::cin>>last;

  //tell fortune

  std::cout<< "Welcome, " <<first[0]<<"."<<last[0]<<"."<< ", here is your fortune..."  <<std::endl;
  
  std::cout<< "Your lucky number is "<<first.length()<<"!"<<std::endl;

  return 0;
}
