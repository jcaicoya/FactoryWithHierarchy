
#include "ProductB.h"

#include <iostream>

ProductB::ProductB()
{}

void ProductB::foo() const
{
    std::cout << "Executing ProductB::foo()";
}
