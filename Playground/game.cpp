#include <string>
#include <iostream>

int main()
{
    std::cout << "0. Quit" << std::endl << "1. Play Game\n";
    int choice;
    std::cin >> choice;

    switch(choice)
    {
        case 0:
        std::cout << "Why not? Games are fun\n";
        return 0;
        case 1:
        std::cout << "Yey, Let play!\n";
        break;
    }
}