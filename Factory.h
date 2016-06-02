
#ifndef FACTORY_H
#define FACTORY_H

#include <FactoryA.h>
#include <FactoryB.h>

#include <memory>

class ProductInterface;


class Factory
{
    public:
        Factory();

        std::unique_ptr<ProductInterface> getProduct(bool condition);

    private:
        std::unique_ptr<FactoryA> _factoryA;
        std::unique_ptr<FactoryB> _factoryB;
};

#endif // FACTORY_H
