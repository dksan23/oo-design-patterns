#include "AFactory.hpp"
#include "ChairA.hpp"
#include "SofaA.hpp"


Chair* AFactory::getChair()
{
    return new ChairA();
}

Sofa* AFactory::getSofa()
{
    return new SofaA();
}