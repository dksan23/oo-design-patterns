#include "Abstract_factory.hpp"

class AFactory : public Abstract_Factory
{
    public:

   Chair* getChair() override;
   Sofa* getSofa() override;
};