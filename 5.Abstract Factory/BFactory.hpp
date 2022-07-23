#include "Abstract_factory.hpp"

class BFactory : public Abstract_Factory
{
    public:

   Chair* getChair() override;
   Sofa* getSofa() override;
};