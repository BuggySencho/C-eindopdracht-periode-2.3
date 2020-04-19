// LoginConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Person.h"
#include "Species.h"
#include "Database.h"
#include "JobOffers.h"
int main()
{
    std::string personName;
    std::string job;
    int bounty;
  //  std::vector<Database> person;

    std::cout << "Welcome Commander!\n";
    std::cout << "Please enter your login data or create a new user.\n";
    std::cout << "-----------------------------------------------------------------\n";
    std::cin >> personName;

    std::cout << "Which of these ocupations is your job " << personName << "?\n";
    std::cout << "Trading\n";
    std::cout << "Mining\n";
    std::cout << "Bounty hunting\n";
    std::cout << "Pirating\n";
    std::cout << "-----------------------------------------------------------------\n";

    std::cin >> job;

    std::cout << "What is your bounty?";
    std::cout << "-----------------------------------------------------------------\n";

    std::cin >> bounty;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
