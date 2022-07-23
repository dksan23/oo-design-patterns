#include<iostream>

#include "Abstract_factory.hpp"
#include "AFactory.hpp"
#include "BFactory.hpp"
void clientA(Abstract_Factory* factory)
{

Chair* chair = factory->getChair();


Sofa* sofa  = factory->getSofa();

// Do something with objects;

delete chair;

delete sofa;
}

void clientB(Abstract_Factory* factory)
{
Chair* chair = factory->getChair();

Sofa* sofa  = factory->getSofa();

//Do Something with the objects;

delete chair;

delete sofa;
}

int main()
{

Abstract_Factory* a_factory = new AFactory();
Abstract_Factory* b_factory = new BFactory();

clientA(a_factory);

clientB(b_factory);

delete a_factory;

delete b_factory;

}