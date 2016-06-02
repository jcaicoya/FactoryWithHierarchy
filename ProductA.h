
#ifndef PRODUCTA_H
#define PRODUCTA_H

#include "ProductInterface.h"

class ProductA : public ProductInterface
{
    public:
        ProductA();

        void foo() const;
};

#endif // PRODUCTA_H
