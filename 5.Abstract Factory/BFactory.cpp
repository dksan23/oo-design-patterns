#include "BFactory.hpp"
#include "ChairB.hpp"
#include "SofaB.hpp"


Chair* BFactory::getChair()
{
    return new ChairB();
}

Sofa* BFactory::getSofa()
{
    return new SofaB();
}
