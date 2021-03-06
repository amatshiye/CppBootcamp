#include "Phonebook.class.hpp"

void addUser(Phonebook contacts[8], int index)
{
    //get and store user input
    std::cout << "Enter your first name:\n";
    std::cin >> contacts[index].fname;
    std::cin.ignore(256,'\n');

    std::cout << "Enter your last name:\n";
    std::cin >> contacts[index].lname;
    std::cin.ignore(256,'\n');

    std::cout << "Enter your nickname:\n";
    std::cin >> contacts[index].nickname;
    std::cin.ignore(256,'\n');

    std::cout << "Enter your login:\n";
    std::cin >> contacts[index].login;
    std::cin.ignore(256,'\n');

    std::cout << "Enter your postal:\n";
    std::cin >> contacts[index].postal;
    std::cin.ignore(256,'\n');

    std::cout << "Enter your email:\n";
    std::cin >> contacts[index].email;
    std::cin.ignore(256,'\n');

    std::cout << "Enter your number:\n";
    std::cin >> contacts[index].number;
    std::cin.ignore(256,'\n');

    std::cout << "Enter your birthday (DD/MM/YY):\n";
    std::cin >> contacts[index].bday;
    std::cin.ignore(256,'\n');

    std::cout << "Enter your favourite meal:\n";
    std::cin >> contacts[index].meal;
    std::cin.ignore(256,'\n');

    std::cout << "Enter your underwear color:\n";
    std::cin >> contacts[index].ucolor;
    std::cin.ignore(256,'\n');

    std::cout << "Enter your darkest secret:\n";
    std::cin >> contacts[index].secret;
    std::cin.ignore(256,'\n');
    std::cout << "Contact added...\n";
}

std::string printString(std::string str)
{
    if (str.length() > 10)
    {
        str.replace(9, 1, ".");
        str.erase (10, str.length());
        return (str);
    }
    else
    {
        return (str);
    }
}

void searchUsers(Phonebook contacts[8])
{
    //Function to list contacts
    int index;
    int num = -1;
    std::cout << "     Index|first name| last name|  nickname\n";
    for (int i = 0; i < 8; i++)
    {
        if (!contacts[i].fname.empty())
        {
            num = i;
            std::cout << std::setw(10);
            std::cout << i << "|";
            std::cout << std::setw(10);            
            std::cout << printString(contacts[i].fname) << "| ";
            std::cout << std::setw(10);                        
            std::cout << printString(contacts[i].lname) << "|";
            std::cout << std::setw(10);                        
            std::cout << printString(contacts[i].nickname) << "|\n";            
        }
    }

    if (!(num == -1))
    {
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
                if (num >= 0 && index <= num)
                {
                    std::cout << "First Name: " << contacts[index].fname << std::endl;
                    std::cout << "Last Name: " << contacts[index].lname << std::endl;
                    std::cout << "Nickname: " << contacts[index].nickname << std::endl;
                    std::cout << "Login: "<< contacts[index].login << std::endl;
                    std::cout << "Number: " << contacts[index].number << std::endl;
                    std::cout << "Postal Address: " << contacts[index].postal << std::endl;
                    std::cout << "Favourite Meal: " << contacts[index].meal << std::endl;
                    std::cout << "Email: " << contacts[index].email << std::endl;
                    std::cout << "Birthday: " << contacts[index].bday << std::endl;
                    std::cout << "Underwear Color: " << contacts[index].ucolor << std::endl;
                    std::cout << "Darkest Secret:" << contacts[index].secret << std::endl;
                    break;
                }
            }
        }
    }
    else
    {
        std::cout << "No contacts found in memory\n";
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
        if (checkArray(contacts) >= 0)
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
    {
        std::cout << "Invalid command. Use ADD, SEARCH OR EXIT\n";
        return (1);
    }
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
            if (num_c >= 8)
            {
                std::cout << "You're about overwrite the last entry\n";
            }
            num_c = processCMD(cmd, contacts, num_c);
        }
    }
    return 0;
}