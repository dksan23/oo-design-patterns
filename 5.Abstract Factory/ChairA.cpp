#include "ChairA.hpp"


#define CHAIR_A_SEAT_WIDTH 5;
#define CHAIR_A_SEAT_LENGTH 8;
#define WOOD 2;

int ChairA::seat_width() {
    return CHAIR_A_SEAT_WIDTH;
}

int ChairA::seat_length() {
    return CHAIR_A_SEAT_LENGTH;
}

int ChairA::material_type()
{
    return WOOD;
}
