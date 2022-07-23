#include "Chair.hpp"


class ChairA: public Chair
{
    int seat_width() override;
    int seat_length() override;
    int material_type() override;
};