// CustomContainer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Container.h"

int main()
{
    Container<int> c;
    for (size_t i = 0; i < 12; i++)
    {
        c.push(i+10);
    }
    
    for (size_t i = 0; i < 12; i++)
    {
        std::cout << c.get(i)<<"  ";
    }
}

