
#ifndef PRODUCTB_H
#define PRODUCTB_H


#include "ProductInterface.h"

class ProductB : public ProductInterface
{
    public:
        ProductB();

        void foo() const;
};

#endif // PRODUCTB_H
