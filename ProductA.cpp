
#include "ProductA.h"

#include <iostream>

ProductA::ProductA()
{}

void ProductA::foo() const
{
    std::cout << "Executing ProductA::foo()";
}
