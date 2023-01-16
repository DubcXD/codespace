#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

void play_game()
{
    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a number: ";
    while(true)
    {
        int guess;
        std::cin >> guess;
        if(guess == random);
        {
            std::cout << "correct\n";
            return 0;
        else if(guess != random);
            std::cout << "Wrong\n";
            break;
        }
    }
}


int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        std::cout << "0. Quit" << std::endl << "1. Play Game\n";
        std::cin >> choice;

        switch(choice)
        {
        case 0:
            std::cout << "Why not? Games are fun\n";
            return 0;
        case 1:
            play_game();
            break;
        }

    }
    while(choice != 0);
}