
#ifndef FACTORYA_H
#define FACTORYA_H

#include <ProductInterface.h>

#include <memory>


class FactoryA
{
    public:
        FactoryA();

        std::unique_ptr<ProductInterface> getProduct() const;
};

#endif // FACTORYA_H

