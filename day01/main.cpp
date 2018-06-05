#include "Pony.hpp"

void ponyOnTheHeap()
{
    //allocated on the heap
    Pony* HeapPony = new Pony;
    std::cout << "Memory about tp be killed\n";
    delete HeapPony; //Preventing memory leaks
}

void ponyOnTheStack()
{
    Pony StackPony;
    std::cout << "To be killed at run-time\n";
    //allocated on the stack
}

int main()
{
    std::cout << "Calling the heap Pony\n";
    ponyOnTheHeap();
    std::cout << "Calling the stack Pony\n";
    ponyOnTheStack();
    std::cout << "All ponies are dead\n";
    return (0);
}