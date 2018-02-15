//Authors: Aero Zajac
#include<iostream>
#include<string>


int main()
{
        //declare variables
        std::string first, last;
        int lucky;

        std::cout<< "What is your first name?" <<std::endl;
        std::cout<< "What is your last name?" <<std::endl;

        //get user input

        std::cin>>first;
        std::cin>>last;
        char l=first[0];
        char r=last[last.length()-1];

        //tell fortune

        std::cout<< "Welcome, " <<first[0]<<"."<<last[0]<<"."<< ", here is your fortune..."  <<std::endl;

        std::cout<< "your lucky number is "<<first.length()<<std::endl;

        if(l == 97||l==105||l==101||l==111||l==117||l==65||l==69||l==73||l==79||l==85) {

                std::cout<< "you are destined to be famous!" <<std::endl;

        }
        else { 

                std::cout<< "you should keep a low profile." <<std::endl;

        }

        if(r ==97||r==105||r==101||r==111||r==117||r==65||r==69||r==73||r==79||r==85) {

                std::cout<< "you have already met your true love." <<std::endl;

        }

        std::cout<< "have a good day!" <<std::endl;

        return 0;
}
