
#include "Factory.h"



#include <make_unique.h>
#include <memory.h>


Factory::Factory() : _factoryA(make_unique<FactoryA>()),
                     _factoryB(make_unique<FactoryB>())
{}


 std::unique_ptr<ProductInterface> Factory::getProduct(bool condition)
 {
     if(true == condition)
     {
         return _factoryA->getProduct();
     }

     return _factoryB->getProduct();
 }

