// 1toN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>

int main()
{
    std::cout << "Enter an integer value for n: ";
    int x;
    std::cin >> x;
    std::cout << "\n";

    int side = x * 2 - 1;
    //std::cout << side;

    for (int i = 1; i <= x; i++)
    {

        for (int j = 1; j < x; j++)
        {
            
            std::cout << ((i < j) ?  i : j);
        }
        for (int j = x; j >= 1; j--)
        {

            std::cout << ((i < j) ?  i : j);
        }
        std::cout << "\n";
    }

    for (int i = x - 1; i >= 1; i--)
    {

        for (int j = 1; j < x; j++)
        {

            std::cout << ((i < j) ? i : j);
        }
        for (int j = x; j >= 1; j--)
        {

            std::cout << ((i < j) ? i : j);
        }
        std::cout << "\n";
    }

    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find a newline
    std::cout << "\nPress enter to end ... ";
    std::cin.get(); // get one more char from the user (waits for user to press enter)
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
