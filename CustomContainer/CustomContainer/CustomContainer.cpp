// CustomContainer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Container.h"

int main()
{
    Container<int> c;
    for (size_t i = 0; i < 20; i++)
    {
        c.push(i+10);
    }
    
    Container<int> c1(c);
    for (size_t i = 0; i < 20; i++)
    {
        std::cout << c1.get(i)<<"  ";
    }
}

