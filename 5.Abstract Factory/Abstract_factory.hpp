#include "Chair.hpp"
#include "Sofa.hpp"
class Abstract_Factory
{
    public:

    virtual Chair* getChair() = 0;
    virtual Sofa* getSofa() = 0;
};