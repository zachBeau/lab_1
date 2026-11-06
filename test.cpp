#include <iostream>
#include <new>

int main()
{
    int treasureLocation = 10;
    int* mapPointer = &treasureLocation;

    std::cout << treasureLocation << std::endl;
    std::cout << mapPointer << std::endl << std::endl;



    int *trapCounter = new int [20]; //CHANGE_HERE
    *trapCounter = 20;

    std::cout << "Traps Avoided: " << *trapCounter /*CHANGE_HERE*/ << std::endl;

   

    return 0;
}