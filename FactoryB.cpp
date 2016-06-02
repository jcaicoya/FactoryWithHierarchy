
#include "FactoryB.h"

#include <ProductB.h>
#include <make_unique.h>


FactoryB::FactoryB()
{}


std::unique_ptr<ProductInterface> FactoryB::getProduct() const
{
    return make_unique<ProductB>();
}
