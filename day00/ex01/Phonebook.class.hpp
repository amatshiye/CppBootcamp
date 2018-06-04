#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <cstdlib>

class Phonebook 
{
    public:
        Phonebook( void );
        ~Phonebook ( void );

        std::string fname; //First Name
        std::string lname; //Last Name
        std::string nickname; //Nickname
        std::string login; //Login
        std::string postal; //Postal
        std::string email; //Email
        std::string number; //Number
        std::string bday; //Birthday
        std::string meal; //Meal
        std::string ucolor; //Underwear color
        std::string secret; //Darkest secret

        //Test function. #REMOVE THIS#
        void printRandom( void );

};

#endif