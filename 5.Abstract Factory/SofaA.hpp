
#include "Sofa.hpp"

class SofaA : public Sofa
{
    public:

    int seat_depth() override;
    int material_type() override;
    int cost() override;
};