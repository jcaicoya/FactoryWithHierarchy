
#ifndef FACTORYB_H
#define FACTORYB_H

#include <ProductInterface.h>

#include <memory>

class FactoryB
{
    public:
        FactoryB();

        std::unique_ptr<ProductInterface> getProduct() const;
};

#endif // FACTORYB_H
