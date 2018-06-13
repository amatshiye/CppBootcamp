#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    srand(time(0));
    int randInst = (rand() % 3) + 1;

    switch(randInst)
    {
        case 1: 
            return (new A());
            break;
        case 2: 
            return (new B());
            break;
        case 3:
            return (new C());
            break;
        default:
            return (NULL);
            break;
    }
}

void    identify_from_pointer(Base *p)
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "C" << std::endl;
}

void    identify_from_reference(Base &p)
{
    if (dynamic_cast<A *>(&p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(&p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(&p) != NULL)
        std::cout << "C" << std::endl;
}

int     main()
{
    Base *p;

    p = generate();
    
    std::cout << "The pointer real type of P is: ";
    identify_from_pointer(p);
    std::cout << std::endl;
    std::cout << "Ther reference real type of P is: ";
    identify_from_reference(*p);

    return 0;
}