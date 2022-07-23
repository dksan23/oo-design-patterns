#include "Sofa.hpp"

class SofaB : public Sofa
{
    public:

    int seat_depth() override;
    int material_type() override;
    int cost() override;
};