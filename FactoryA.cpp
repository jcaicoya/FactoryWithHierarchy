
#include "FactoryA.h"

#include <ProductA.h>
#include <make_unique.h>

FactoryA::FactoryA()
{}


std::unique_ptr<ProductInterface> FactoryA::getProduct() const
{
    return make_unique<ProductA>();
}

