
#include <ProductInterface.h>
#include <Factory.h>

#include <iostream>
#include <memory>


int main()
{
    Factory factory;
    std::unique_ptr<ProductInterface> product = factory.getProduct(true);
    product->foo();
    std::cout << std::endl;
    product = factory.getProduct(false);
    product->foo();
    std::cout << std::endl;
    return 0;
}
