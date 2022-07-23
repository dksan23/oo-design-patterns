#include "Chair.hpp"


class ChairB: public Chair
{
    int seat_width() override;
    int seat_length() override;
    int material_type() override;
};