#include "Phonebook.class.hpp"

//checking contacts if it has any space before adding
int checkArray(Phonebook contacts[8])
{
    for (int i = 0; i < 8; i++)
    {
        if (contacts[i].fname.empty() && i != 8)
            return (1); //if string is empty and there's space left
    }
    return (0);
}

//Function to process the ADD and SEARCH commands
int processCMD(std::string cmd, Phonebook contacts[8])
{
    if (cmd == "ADD")
    {
        if (checkArray(contacts) == 1)
        {
            //collect user input
            return (0);
        }
        else
            return (1);
    }
    else if (cmd == "SEARCH")
    {
        return (0);
    }
    else
        return (1);
}

int main(void)
{
    Phonebook newPhonebook;
    Phonebook contacts[8];
    std::string cmd;

    //Get command
    while (true)
    {
        //get add command
        std::cout << "PLease enter a command: \n";
        std::cin >> cmd;

        if (cmd == "EXIT")
        {
            exit(0);
        }
        else
        {
            if (processCMD(cmd, contacts))
                exit(1);
        }
    }

    newPhonebook.printRandom();

    return 0;
}