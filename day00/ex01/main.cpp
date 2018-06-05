#include "Phonebook.class.hpp"

void addUser(Phonebook contacts[8], int index)
{
    //get and store user input
    std::cout << "Enter your first name:\n";
    std::cin >> contacts[index].fname;

    std::cout << "Enter your last name:\n";
    std::cin >> contacts[index].lname;

    std::cout << "Enter your nickname:\n";
    std::cin >> contacts[index].nickname;

    std::cout << "Enter your login:\n";
    std::cin >> contacts[index].login;

    std::cout << "Enter your postal:\n";
    std::cin >> contacts[index].postal;

    std::cout << "Enter your email:\n";
    std::cin >> contacts[index].email;

    std::cout << "Enter your number:\n";
    std::cin >> contacts[index].number;

    std::cout << "Enter your birthday (DD/MM/YY):\n";
    std::cin >> contacts[index].bday;

    std::cout << "Enter your favourite meal:\n";
    std::cin >> contacts[index].meal;

    std::cout << "Enter your underwear color:\n";
    std::cin >> contacts[index].ucolor;

    std::cout << "Enter your darkest secret:\n";
    std::cin >> contacts[index].secret;
    std::cout << "Contact added...\n";
}

void searchUsers(Phonebook contacts[8])
{
    //Function to list contacts
    int index;
    std::cout << "Index | first name | last name | nickname \n";
    for (int i = 0; i < 8; i++)
    {
        if (!contacts[i].fname.empty())
        {
            std::cout << "No. " << i << " | ";
            std::cout << contacts[i].fname << " | ";
            std::cout << contacts[i].lname << " | ";
            std::cout << contacts[i].nickname << " | \n";            
        }
    }

    while (true)
    {
        std::cout << "Enter contact index to view more info\n";
        std::cin >> index;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(256,'\n');
            std::cout << "Invalid input. (You must enter a number)\n";
        }
        else
        {
            break;
        }
    }
}

//checking contacts if it has any space before adding
int checkArray(Phonebook contacts[8])
{
    for (int i = 0; i < 8; i++)
    {
        if (contacts[i].fname.empty() && i != 8)
            return (i); //if string is empty and there's space left
    }
    return (-1);
}

//Function to process the ADD and SEARCH commands
int processCMD(std::string cmd, Phonebook contacts[8], int num_c)
{
    if (cmd == "ADD")
    {
        if (int x = checkArray(contacts) >= 0)
        {
            //collect user input
            addUser(contacts, num_c);
            return (++num_c);
        }
        else
            return (1);
    }
    else if (cmd == "SEARCH")
    {
        searchUsers(contacts);
        return (0);
    }
    else
        return (1);
}

int main(void)
{
    int num_c = 0;
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
            break;
        }
        else
        {
            num_c = processCMD(cmd, contacts, num_c);
        }
    }

    std::cout << "Printing contacts\n";
    std::cout << "First name: " <<  contacts[0].fname << std::endl;

    newPhonebook.printRandom();

    return 0;
}